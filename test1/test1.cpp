// test1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

/*
Programa : test1.cpp
Nombre : Uriel Neftali Perez Salgado
Descripción : Este programa imprime "Hello World en consola"
Fecha: 19/08/2026
Fecha de modificación: 19/08/2026
*/


#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int suma = 0;

	printf("Digite un numero: ");
	scanf_s("%d", &a);

	printf("Digite otro numero: ");
	scanf_s("%d", &b);

	suma = a + b;

	std::cout << "La suma de " << a << " y " << b << " es: " << suma << std::endl;

}