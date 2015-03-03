//L'objectiu es que la classe cadena no peti mai. 
//Nos adentramos en el fantástico mundo de controlar la memoria. (Palabra de Ricard)
//String:
//      -Mai surt de rang. No ha d'accedir a una memòria que no sigui seva.
//      -3 constructors: String() <- constructor buit. 0 tamany, conté 0.
//                       String (const char*) <- 
//                       String (const String&) <- 

#ifndef _Cadena_H
#define _Cadena_H

////////////////////////////////
//Includes
////////////////////////////////

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

	void Alloc(unsigned int required_memory);

public: 

////////////////////////////////
//Constructors
////////////////////////////////

	String();

	String(unsigned int size);

	String(const char* cnew_string);

	String(const String& string);

	//String(const char* format, ...);

////////////////////////////////
//Destructors
////////////////////////////////

	~String();

////////////////////////////////
//Operators
////////////////////////////////


	bool operator == (const String& string) const;

	bool operator == (const char* string) const;


	bool operator != (const String& string) const;

	bool operator != (const char* string) const;

	const String  operator= (const char* string);


	const String operator= (const String& string);

////////////////////////////////
//Functions
////////////////////////////////

	 int  Length() const;


	char* GetString() const;

	 int Capacity() const;


	void Clear();

};

#endif

