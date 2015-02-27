//L'objectiu es que la classe cadena no peti mai. 
//Nos adentramos en el fantástico mundo de controlar la memoria. (Palaabra de Ricard)
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

#define TMP_STRING_SIZE 4096

class String
{
private:
	int ilength;
	char* cstring;
	void Alloc(unsigned int required_memory)
	{
		ilength = required_memory;
		cstring = new char[ilength];
	}
public: 
	// ->                                     
		String()                          
		{ 
			ilength = 1;                     //Alloc(1);
			cstring = new char[ilength];     //Clear();
			cstring[0] = '\0';
		}

		String(unsigned int size)
		{
			if (ilength > 0)
				Alloc(ilength);
			else
				Alloc(1);

			this->Clear();

		}
		String(const char* cnew_string)
		{
			ilength = strlen(cnew_string) + 1;
			cstring = new char[ilength];
			strcpy_s(cstring, ilength, cnew_string);
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
			ilength = 0;

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
					strcpy_s(cstring, ilength, tmp);
				}
			}
			if (ilength == 0)
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
				if (strlen(string) + 1 > ilength)
				{
					delete[] cstring;
					Alloc(strlen(string) + 1);
				}

				strcpy_s(cstring, ilength, string);
			}
			else
			{
				Clear();
			}
			return (*this);
		}

		const String operator= (const String& string)
		{
			if (string.length() + 1 > ilength)
		}

		void Clear();
		{
			cstring[0] = '\0';
		}
};

#endif

//Apunts: tarda més en compilar un .h que un .cpp
//cast: canviar un tipus de variable a un altre
//Ex: int a;
//    char b = 'c';
//    a = (int) b;
//Això ens donarà el codi asci de c.
//THIS es un punter que existeix en cada mètode d'una classe i que apunta a la mateixa(classe).