#include <iostream>

using namespace std;

int suma(int lista[], int longitud)
{
	int s = 0;
	for (int k = 0; k < longitud; k++)
	{
		s += lista[k];
	}
	return s;
}



int main()
{
	int lista1[10] = {2,6,3,6,4};
	
	cout<< "La suma es: "<<suma(lista1, 5);
	
	
	return 0;
}
