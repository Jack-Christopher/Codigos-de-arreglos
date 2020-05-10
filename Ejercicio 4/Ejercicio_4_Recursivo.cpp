#include <iostream>

using namespace std;


int obtener_longitud(char *cadena)
{
	if (cadena[0] == '\0')
		return 0;
	cadena++;	
	return 1+ obtener_longitud(cadena);
}


int main()
{
	char cadena2[] = "Hola, ¿como estas?";
	
	cout<< "Longitud: "<<obtener_longitud(cadena2);
	
	return 0;
}
