#include <iostream>

using namespace std;

//Ya está optimizado :v

void invertir(int *lista, int longitud)
{
	int temp = 0;
	int aux = longitud-1;
	
	for (int k =0;  k < longitud/2; k++)
	{
		temp = *(lista+k);
		*(lista+k) = *(lista+aux);
		*(lista+aux) = temp;
		aux -= 1;
	}
	
}


int main()
{
	int lista1[10] = {1,2,3,4,5,6,7,8,9,10};
	invertir(lista1, 10);
	
	
	//Para verificar si ha invertido la lista
	for(int k = 0; k < 10; k++)
	{
		cout<< lista1[k]<<endl;
	}
	return 0;
}
