/*

Escribe un programa que solicite dos cadenas por teclado y escriba por pantalla el valor numérico devuelto por strcmp().

-----------------------------resuelto por pasos---------------------------------------

1) Definir una constante a la cual le pasaremos por valor la longitud de los vectores que crearemos mas adelante (opcional)

2) Crear dos vectores en donde almacenaremos las cadenas de texto que ingresara el usuario.
	a) ejemplo de codigo
		*) char vector1[10]
		*) char vector2[10]

3) Solicitar al usuario que escriba las cadenas de texto y que estas se muestren por pantalla.
	a) ejemplo de codigo
		*)printf("Introduce un string: ")
		*)fgets(vector1, 10, stdin)
		*)printf("haz introdicido %s", vector1)
		*)printf("Introduce otro string: ")
		*)fgets(vector2, 10, stdin)
		*)printf("haz introdicido %s", vector2)

4) Comparar las cadenas introducidas por el usuario para saber si una es mayor o menor que la otra o tienen la misma longitud
	a) ejemplo de codigo
		*)printf("%d", strcmp(vector1, vector2))

*/

#include <stdio.h>
#include <string.h>


int main() {
    char vector1[256];
    char vector2[256];

	printf("Introduce un string: ");
	fgets(vector1, 256, stdin);
	printf("haz introdicido %s", vector1);

	printf("Introduce otro string: ");
    fgets(vector2, 256, stdin);
	printf("haz introdicido %s", vector2);

    printf("%d", strcmp(vector1, vector2));

    return 0;
}