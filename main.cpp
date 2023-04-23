#include<iostream>
#include "funciones.h"
#define MAXSIZE 5
using namespace std;
int main()
{
    int menU, memoria, acum, acum1;
    float stack[MAXSIZE];
    float dato[MAXSIZE];
    acum = 0;
    for (int i = 0; i < MAXSIZE; i++)
        {
           
            stack[i] = 0;
        }
    
    menU = menu();
    cout<<"Escogiste la opcion "<<menU<<endl;
    do
    {
        switch (menU)
       {
            case 1:
                menU = menu();
                break;
            case 2:
                    acum1 = acum;
                    stack[acum] =pusH();
                    dato[acum]= stack[acum];
                    acum++;
                    menU = MAXSIZE - 4; // con esto evito se quede enclavado
                   if (acum >= MAXSIZE)
                    {                   
                        cout<<"Error, la pila esta llena (full-stack), ya NO podra ingresar un Nuevo Dato"<<endl;
                          menU = MAXSIZE - 1; //sin esto no puedo deter la impresion de error  
                    }
                 dato[acum] = stack[acum];
                     
                break;
                
            case 3:
                if (acum < 0) 
                        {
                            cout<<"Error, la pila esta vacia (emty-stack)"<<endl; //exit;
                            menU = MAXSIZE - 4;
                        }else{
                                stack[acum - 1] = 0;
                                acum1 = poP(acum);
                                acum = acum1;
                                menU = MAXSIZE - 4;
                             }
                break;  
            default:
                break;
        }
    } while (menU != MAXSIZE - 1);
    //<---------------------------------------------------------------------------//
    //Codigo para verificar valores//
    //--------------------------------------------------------------------------->//
   //for (int i = 0; i < MAXSIZE; i++)
     //{
     //   cout<<"El dato en la posiscion  "<<i<<" es "<<stack[i];
      //  cout<<"     Dato rescatado en posicion  "<<i<<" es "<<dato[i]<<endl;
     //}
     //cout<<"Dato del acomulador es  "<<acum<<endl;
  return 0;
}
