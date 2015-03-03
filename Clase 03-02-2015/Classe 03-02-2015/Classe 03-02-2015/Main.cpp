#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void swap(int& a, int& b) //En c++
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main(int argc, char** argv)
{
	int a = 2;
	int b = 3;
	swap(a, b);
	printf("%d" "%d", a, b);
	system("PAUSE");
	return 0;
}