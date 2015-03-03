#include "Cadena.h"

////////////////////////////////
//Constructors
////////////////////////////////

	 void String::Alloc(unsigned int required_memory)
	{
		istring_length = required_memory;
		cstring = new char[istring_length];

	}


	String::String()
	{
		istring_length = 1;                     //Alloc(1);
		cstring = new char[istring_length];     //Clear();
		cstring[0] = '\0';
	}


	String::String(unsigned int size)
	{
		if (istring_length > 0)
			Alloc(istring_length);
		else
			Alloc(1);

		this->Clear();

	}


	String::String(const char* cnew_string)
	{
		istring_length = strlen(cnew_string) + 1;
		cstring = new char[istring_length];
		strcpy_s(cstring, istring_length, cnew_string);
	}


	String::String(const String& string)
	{
		istring_length = string.Length();
		Alloc(istring_length);
		strcpy_s(cstring, istring_length, string.cstring);

	}


	/*String::String(const char* format, ...)
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
			Alloc(1);
			Clear();
		}
	}
	*/
////////////////////////////////
//Destructors
////////////////////////////////


String::~String()
{
	delete[] cstring;
}


////////////////////////////////
//Operators
////////////////////////////////


	bool String::operator == (const String& string) const
	{
		return strcmp(string.cstring, cstring) == 0;
	}

	bool String::operator == (const char* string) const
	{
		if (string != NULL)
			return strcmp(string, cstring) == 0;
		return false;
	}

	bool String::operator != (const String& string) const
	{
		return strcmp(string.cstring, cstring) != 0;
	}

	bool String::operator != (const char* string) const
	{
		if (string != NULL)
			return strcmp(string, cstring) != 0;
		return false;
	}

	const String  String::operator= (const char* string)
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

	const String String::operator= (const String& string)
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

////////////////////////////////
//Functions
////////////////////////////////

	 int  String::Length() const
	{
		return strlen(cstring);
	}

	char* String::GetString() const
	{
		return cstring;
	}

	 int String::Capacity() const
	{
		 return (sizeof(istring_length));
	}

	void String::Clear()
	{
		cstring[0] = '\0';
	}
