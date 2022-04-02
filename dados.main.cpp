//Melvin Yovani Lopez

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;



int main()
{
    while (true)
    {
        cout<<"-- Juego de dados, se gana con los numeros 6 , 8 , 10 y se pierden con los numeros 4 y 14 ---"<<endl<<endl;
        cout<<"Presionar cualquier tecla para lanzar los dados: "<<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
        cout<<"La suma de los dados es: ["<<dado1+dado2<<"]"<<endl;
        if (dado1+dado2 == 6 or dado1+dado2 == 8 or dado1+dado2 == 10)
        {
            cout<<"\n°°° El jugador gana, la casa pierde °°°"<<endl;
            break;
        }
        if (dado1+dado2 == 4 or dado1+dado2 == 14)
        {
            cout<<"\n*** La casa gana, el jugador pierde ***"<<endl;
            break;
        }
        cout<<"\n--- Vuelv a lanzar ---"<<endl;
        system("pause");
        system ("cls");
    }   
}
