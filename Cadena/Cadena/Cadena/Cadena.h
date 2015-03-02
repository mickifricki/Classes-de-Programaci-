//L'objectiu es que la classe cadena no peti mai. 
//Nos adentramos en el fantástico mundo de controlar la memoria. (Palabra de Ricard)
//String:
//      -Mai surt de rang. No ha d'accedir a una memòria que no sigui seva.
//      -3 constructors: String() <- constructor buit. 0 tamany, conté 0.
//                       String (const char*) <- 
//                       String (const String&) <- 

#ifndef _Cadena_H
#define _Cadena_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

#define TMP_STRING_SIZE 4096

class String
{
private:
	int istring_length;
	char* cstring;
	void Alloc(unsigned int required_memory)
	{
		istring_length = required_memory;
		cstring = new char[istring_length];
	}
public: 
	// ->                                     
		String()                          
		{ 
			istring_length = 1;                     //Alloc(1);
			cstring = new char[istring_length];     //Clear();
			cstring[0] = '\0';
		}

		String(unsigned int size)
		{
			if (istring_length > 0)
				Alloc(istring_length);
			else
				Alloc(1);

			this->Clear();

		}
		String(const char* cnew_string)
		{
			istring_length = strlen(cnew_string) + 1;
			cstring = new char[istring_length];
			strcpy_s(cstring, istring_length, cnew_string);
		}
		String(const String&);

		~String()
		{
			delete[] cstring;
		}
		int len() const
		{
			return strlen(cstring);
		}
		String(const char* format, ...)
		{
			istring_length = 0;

			if (format != NULL)
			{
				static char tmp[TMP_STRING_SIZE];
				static va_list ap;

				//Construct the string from the variable arguments
				va_start(ap, format);
				int res = vsprintf_s(tmp, TMP_STRING_SIZE, format, ap);
				va_end(ap);

				if (res > 0)
				{
					Alloc(res + 1);
					strcpy_s(cstring, istring_length, tmp);
				}
			}
			if (istring_length == 0)
			{

			}
		}

		//Operators
		bool operator == (const String& string) const
		{
			return strcmp(string.cstring, cstring) == 0;
		}
		bool operator == (const char* string) const
		{
			if (string != NULL)
				return strcmp(string, cstring) == 0;
			return false;
		}

		bool operator != (const String& string) const
		{
			return strcmp(string.cstring, cstring) != 0;
		}
		bool operator != (const char* string) const
		{
			if (string != NULL)
				return strcmp(string, cstring) != 0;
			return false;
		}
		const String  operator= (const char* string)
		{
			if (string != NULL)
			{
				if (strlen(string) + 1 > istring_length)
				{
					delete[] cstring;
					Alloc(strlen(string) + 1);
				}

				strcpy_s(cstring, istring_length, string);
			}
			else
			{
				Clear();
			}
			return (*this);
		}

		const String operator= (const String& string)
		{
			if (string != NULL){
				if (string.istring_length + 1 > istring_length)
				{
					delete[] cstring;
					Alloc(string.istring_length + 1);
				}
				strcpy_s(cstring, string.istring_length, string.cstring);
			}
			else
			{
				Clear();
			}
			return (*this);
		}
		const String operator+= (const char* string)
		{
			if (string != NULL)
			{
				if (strlen(string) + 1 > istring_length)
				{
					delete[] cstring;
					Alloc(strlen(string) + 1);
				}

				strcat(cstring, string);
			}
			else
			{
				Clear();
			}
			return (*this);
		}


		void Clear()
		{
			cstring[0] = '\0';
		}
};

#endif

