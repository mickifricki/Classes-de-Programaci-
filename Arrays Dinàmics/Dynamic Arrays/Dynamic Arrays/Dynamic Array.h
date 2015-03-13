#ifndef _Dynamic_Array_H_
#define _Dynamic_Array_H_

#include <stdio.h>

class DynamicArray
{
private:
	int* idata;
	unsigned int uiallocated_memory;
	unsigned int uinumber_elements;

public: 
	DynamicArray() :idata(NULL), uiallocated_memory(0), uinumber_elements(0){}
	~DynamicArray(){ if (idata != NULL) delete[] idata; }
	void Reallocate(unsigned int new_memory_size); 
	void PushBack(int value);
	int Pop();
	void Insert(int value, unsigned int position);
	int& operator[] (unsigned int index); //torna una posició, retorna idata. Modifica
	const int& operator[] (unsigned int index) const; //Llegeix una posició, però no modifica res.
};
#endif