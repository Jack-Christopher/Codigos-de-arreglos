#include <iostream>

using namespace std;

int invertir(int *lista, int longitud)
{
    if ( longitud == 1) return 0;
    
    int temp = 0;
    
    temp = *lista;
    for(int m = 0; m < longitud -1; m++)
    {
    	*(lista + m) = *(lista + m + 1);
	}
	*(lista+longitud-1) = temp;
		
	return invertir(lista, --longitud);
}

int main()
{
	int lista1[13] = {3,7,7,2,8,1,9,5,8,3,6,8,4};
	invertir(lista1, 13);
	
	//Para verificar si ha invertido la lista
	for (int k = 0; k < 13; k++)
	{
		cout<< lista1[k]<<endl;
	}

	return 0;
}






