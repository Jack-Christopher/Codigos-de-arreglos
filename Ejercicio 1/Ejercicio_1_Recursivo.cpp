#include <iostream>

using namespace std;


int suma(int lista[], int longitud)
{
	if (longitud == 0)  return 0;
	return lista[--longitud] + suma(lista, longitud);
	
}


int main()
{
	int lista2[10] = {1,2,3,4,5,6,7,8,9,10};
	
	cout<< "La suma es: "<< suma(lista2, 10);
	
	return 0;
}
