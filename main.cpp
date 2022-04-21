//Crear un arreglo bidimensional de 5x5
//Inicializar cada elemento del arreglo con valores random
//Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma: "

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int random();
 
 
int main()
{
    int fil = 5, col = 5, suma = 0;
    srand(time(NULL));
 
    int matriz[fil][col];
 
    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = random();
            suma += matriz[i][j];
        }
 
  printf("\n *****Melvin Yovani Lopez:****\n");
  printf("\n Matriz:\n");
 
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %2d  ", matriz[i][j]);
        }
        printf("\n");
    }
 
    printf("\n Total Suma: %d\n", suma);
 
    return 0;
}
 
int random()
{
    return rand() % 10 + 1;
}
