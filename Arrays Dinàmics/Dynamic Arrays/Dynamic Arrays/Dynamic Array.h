#ifndef _DYNAMICARRAY_H_
#define _DYNAMICARRAY_H_

#include <stdio.h>
#include <assert.h>

class DynamicArray
{
private:
	int* idata;
	unsigned int uiallocated_memory;
	unsigned int uinumber_elements;

public: 
	DynamicArray() :idata(NULL), uiallocated_memory(0), uinumber_elements(0){};
	~DynamicArray(){ if (idata != NULL) delete[] idata; };
	void Reallocate(unsigned int uinew_memory_size)
	{
		assert(uinew_memory_size > 0);
		delete[] idata;
		idata = new int[uinew_memory_size];
		uiallocated_memory = uinew_memory_size;
		uinumber_elements = uinew_memory_size;
	};
	void CopyArray(int *isource, int* idestination)
	{
		for (int i = 0; i < uinumber_elements; i++)
		{
			idestination[i] = isource[i];
		}
	};
	void PushBack(int value)
	{
		if (uinumber_elements > 0){
			if (uiallocated_memory - uinumber_elements == 0)
			{
				int* tmp = new int[uinumber_elements];
				CopyArray(idata, tmp);
				Reallocate(uiallocated_memory + 1);
				CopyArray(tmp, idata);
				idata[uinumber_elements - 1] = value;
			}
			else if (uiallocated_memory - uinumber_elements > 0)
			{
				idata[uinumber_elements] = value;
			}
			else
			{
				printf("Fuera de rango jueputa!");
			}
		}
		else
		{
			Reallocate(1);
			idata[uinumber_elements - 1] = value;
		}
	};
	int Pop()
	{
		int value = 0;
		if (uinumber_elements > 0)
		{
			value = idata[uinumber_elements - 1];
			--uinumber_elements;

			return value;
		}
		else
			return NULL;
	}
	void Insert(int value, unsigned int position)
	{
		if (uinumber_elements > 0 && position < uinumber_elements){
			if (uiallocated_memory - uinumber_elements == 0)
			{
				int* tmp = new int[uinumber_elements];
				CopyArray(idata, tmp);
				Reallocate(uiallocated_memory + 1);
				CopyArray(tmp, idata);
				for (int i = position; i < uinumber_elements; i++)
				{
					idata[i] = idata[i + 1];
				}
				idata[position] = value;
			}
		}
	}
	int& operator[] (unsigned int index)
	{
		assert(index < uinumber_elements);
			return idata[index];
	} //returns a position, returns idata. Modifies.
	const int& operator[] (unsigned int index) const
	{
		assert(index < uinumber_elements);
		return idata[index];
	} //Reads a position, but not modifies its value.
};
#endif