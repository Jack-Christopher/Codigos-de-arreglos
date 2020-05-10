#include <iostream>

using namespace std;

void concatenar(char *a, char *b)
{
	int longitud = 0;
	while(*b) 
	{
		longitud++;
		b++;
	}
	
	b -= longitud;
		
	for (int k = 0; k <longitud; k++)
	{
		b[k+longitud] = a[k];
	}
}


int main()
{
	
	char a[] = "Hola Mundo";
	char b[] = "El mensaje es: ";
	
	concatenar(a,b);
	
	
	//Para verificar el mensaje esté concatenado
	for (int k = 0; k < 26; k++)
	{
		cout<< b[k];
	}
	
	
	
	return 0;
}
