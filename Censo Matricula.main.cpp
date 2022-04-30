#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
 
using namespace std;
 
class sistema
{
      public:
             	  char nombre[50];
                  char apellido[50];
                  int edad, grado;
                  char sexo[10];
 
             void menu(){
                  int seleccion=0, repetir=1;
 
                  while(repetir==1)
                  {
                  system("cls");
                  cout<<" \n\n\n*************PROYECTO ELABORADO POR MELVIN YOVANI LOPEZ**************\n\n\n     "<<endl;
                  
                  cout<<" \n\n\n*************SISTEMA DE MATRICULA UNAH-VS**************\n\n\n     "<<endl;
                  cout<<"1. MATRICULAR  " << endl;
                  cout<<"2. BUSCAR MATRICULA "<<endl;
                  cout<<"3. MODIFICAR MATRICULA "<<endl;
                  cout<<"4. NUMERO DE HOMBRES Y MUJERES MATRICULADOS "<<endl;
                  cout<<"5. SALIR "<<endl;
                  cout<<"Ingrese la opcion-> ";
                  cin>>seleccion;
                  cout<<endl;
 
                  switch(seleccion){
                      case 1:matricula(); getch();break;
                      case 2:buscar(); getch();break;
                      case 3:modificar(); getch();break;
                      case 4:genero(); getch();break;
                      case 5:repetir=0; break;
                      default: cout <<"Error. Dato Invalido!! "<<endl; getch();break;
                      }
                  }
                  }
 
             void matricula(){
                  int respuesta=0;
 
                  system("cls");
                  cout<<"     AGREGAR MATRICULA    "<<endl;
                  cout<<"1.INGRESE NOMBRE " << endl;
                  cin>>nombre;
                  cout<<"2.INGRESE APELLIDO " << endl;
                  cin>>apellido;
                  cout<<"3. INGRESAS EDAD "<<endl;
                  cin>>edad;
                  cout<<"4. INGRESA SEXO "<<endl;
                  cin>>sexo;
                  cout<<"5. MATRICULAR DE 1 A 6 Carreras "<<endl;
                  cin>>grado;
                  cout<<"6. VOLVER AL MENU PRINCIPAL "<<endl;
                  cout<<"7. SALIR "<<endl;
                  cout<<"Ingrese la opcion-> ";
                  cin>>respuesta;
                  cout<<endl;
 
                  switch(respuesta){
                      case 6:menu(); break;
                      case 7:system ("pause"); break;
                      default: cout <<"Error. Dato Invalido!! "<<endl; break;
                      }
                  }
 
                   void buscar(){
                  int respuesta=0;
 
                  system("cls");
                  cout<<"      BUSCAR      "<<endl;
                  cout<<"1. nombre " <<endl;
                  cout<<"2. apellido " << endl;
                  cout<<"3. grado " << endl;
                  cout<<"4. VOLVER AL MENU PRINCIPAL "<<endl;
                  cout<<"5. SALIR "<<endl;
                  cout<<"Ingrese la opcion-> ";
                  cin>>respuesta;
                  cout<<endl;
 
                  switch(respuesta){
                      case 1:cout<<nombre<<endl;getch();break;
                      case 2:cout<<apellido<<endl;getch(); break;
                      case 3:cout<<grado<<endl;getch();break;
                      case 4:menu(); break;
                      case 5:system ("pause"); break;
                      default: cout <<"Error. Dato Invalido!! "<<endl; break;
                      }
                  }
 
                  void modificar(){
                  int respuesta=0;
 
                  system("cls");
                  cout<<"       MODIFICAR      "<<endl;
                  cout<<"1. nombre " << endl;
                  cout<<"2. edad "<<endl;
                  cout<<"3. sexo "<<endl;
                  cout<<"4. grado "<<endl;
                  cout<<"5. VOLVER AL MENU PRINCIPAL "<<endl;
                  cout<<"6. SALIR "<<endl;
                  cout<<"Ingrese la opcion-> ";
                  cin>>respuesta;
                  cout<<endl;
 
                  switch(respuesta){
                      case 1:cout<<"nombre"<<endl;cin>>nombre;getch();break;
                      case 2:cout<<"edad"<<endl;getch(); break;
                      case 3:cout<<"sexo"<<endl;getch();break;
                      case 4:cout<<"grado"<<endl;getch();break;
                      case 5:menu(); break;
                      case 6:system ("pause"); break;
                      default: cout <<"Error. Dato Invalido!! "<<endl; break;
                      }
                  }
 
                  void genero(){
                  int respuesta=0;
 
                  system("cls");
                  cout<<"      GENERO     "<<endl;
                  cout<<"1. MUJER " << endl;
                  cout<<"2. HOMBRE"<<endl;
                  cout<<"3. VOLVER AL MENU PRINCIPAL "<<endl;
                  cout<<"4. SALIR "<<endl;
                  cout<<"Ingrese la opcion-> ";
                  cin>>respuesta;
                  cout<<endl;
 
                  switch(respuesta){
                      case 1:cout<<"1"<<endl; getch(); break;
                      case 2:cout<<"2"<<endl;getch(); break;
                      case 3:menu(); break;
                      case 4:system ("pause"); break;
                      default: cout <<"Error. Dato Invalido!! "<<endl; break;
                      }
                  }
      };
 
int main()
{
    sistema matricular;
 
    cout << "Sistema matricula" << endl;
    cout<<endl;
 
 
    matricular.menu();
 
 
 
 
    system ("pause");
    return 0;
}
