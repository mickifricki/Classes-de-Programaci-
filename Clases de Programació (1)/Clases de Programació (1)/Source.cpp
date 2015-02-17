#include <windows.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>

//assert(p == "algo") comproba que p sigui "algo", sino no funciona

/*
void SetString(char* p)
{
	//if (p == NULL){ printf("Valor no valid"); }
	if (p != NULL)
	strcpy_s(p, 100,"hola mundo");
}
*/
void PrintFloat(char* cadena, float valor)
{
	assert(cadena);
	assert(valor > 100.0f && valor < 500.0f);
		sprintf_s(cadena, 100, "%f", valor);
	
}
int main(int argc, char** argv)
{
	char cadena[100];
	char* pepito = NULL;

	PrintFloat(cadena, 104);
	//SetString(pepito);

	printf("%s", cadena);
	OutputDebugString("JUEPUTA!!!!");
	getchar();
}

//Log ("cargando Textura: %s, textura); de deures que funcioni   

//const:  es constant. Una modificació de una variable o mètode amb la intenció que el valor no varii. Desde el punt de vista d'un mètode vol dir que no varia la estructura interna
/*
class exemple
{
	 int valor;
	
	public:

	int SetValor(int v)
	{
		valor = v;
	}
	int GetValor() const //t'asegura que les coses han de ser com són. No pots variar els valors
	{
		return valor;
	}
};
*/


/*
class exemple
{
	const int valor;

	exemple() : valor(15)
	{
		//valor = 15;
	}
};
*/