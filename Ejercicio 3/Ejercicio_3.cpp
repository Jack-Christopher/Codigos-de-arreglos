#include <iostream>

using namespace std;


void ordenamiento(int lista[], int longitud)
{
	int p = 0;
	int t = 0;
	for(int k = 0; k< longitud-1; k++)
	{
		p = k;
   		t = lista[k];
   		for (int m = k; m < longitud; m++)
   		{
	   		if (lista[m] > t)
	   		{
	   			p = m;
	       		t = lista[m];
				lista[p] = lista[k];
	   			lista[k] = t;
	   		}
	      	
		}
    }
}







int main()
{
	
	int lista[10] = {6,2,9,5,8,3,1,0,7,4};
	
	ordenamiento(lista, 10);
	
	
	//Para verificar que han sido ordenados
	for (int k = 0; k < 10; k++)
	{
		cout<< lista[k]<< endl;
	}	
	
	
	
	
	return 0;
}
