//L'objectiu es que la classe cadena no peti mai. 
//Nos adentramos en el fantástico mundo de controlar la memoria. (Palaabra de Ricard)
//String:
//      -Mai surt de rang. No ha d'accedir a una memòria que no sigui seva.
//      -3 constructors: String() <- constructor buit. 0 tamany, conté 0.
//                       String (const char*) <- 
//                       String (const String&) <- 

#ifndef _Cadena_H
#define _Cadena_H

class String
{
private:
	int ilength;
	char cstring[];
public: 

		String()
		{
			ilength = 1;
			cstring = new char[ilength];
			cstring[0] = '\0';
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
			return strlen(cadena);
		}
		//String (cosnt char* format, ...)
		
};

#endif