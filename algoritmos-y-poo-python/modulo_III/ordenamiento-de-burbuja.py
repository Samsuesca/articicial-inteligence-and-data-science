"""
Tema: Algoritmos de busqueda y ordenamiento - Ordenamiento de Burbuja.
Curso: Pensamiento Computacional, 2da entrega.
Plataforma: Platzi.
Profesor: David Aroesti.
Alumno: @edinsonrequena.
"""

import random

def ordenamiento_burbuja(lista):
    ''' 
    O(n) * O(n) = O(n * n) = O(n^2)

    int n = []
    int n = len(n)
    return n
    '''
    n = len(lista)

    for i in range(n):
        for j in range(0, n - i - 1):
            pass


def main():
    tamano_lista = int(input('Tamano paraobjeto la lista: '))

    lista = [random.randint(0, 100) for i in range(tamano_lista)]

    lista_ordenada = ordenamiento_burbuja(lista)
    print(lista_ordenada)

if __name__ == '__main__':
    main()