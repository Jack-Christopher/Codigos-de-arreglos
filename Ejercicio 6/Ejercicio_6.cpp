#include <iostream>

using namespace std;

void copiar(char *a, char *b)
{
	int contador = 0;
	
	while(*a)
	{
		*(b + contador) = *a;
		contador++;
		a++;
	}
}

int main()
{
	
	char a[11] = "Hola Mundo";
	
	char b[11];
	
	copiar(a, b);
	
	
	//Para verificar que ha sido copiado
	for(int k = 0; k < 10; k++)
	{
		cout<< b[k];
	}
	
	
	return 0;
}
