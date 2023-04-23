#include<iostream>
using namespace std;
int menu(){
    int menu;
    cout<<"Menu"<<endl;
    cout<<"Oprime 1 si deseas que se muestre el menu"<<endl;
    cout<<"Oprime 2 si deseas ralizar la push"<<endl;
    cout<<"Oprime 3 si deseas ralizar la pop"<<endl;
    cout<<"Oprime 4 si deseas salir del programa"<<endl;
    cin>>menu;
    //cout<<"Oprime 1 si deseas ralizar la accion #1"<<endl;

    return menu;    
}

float pusH(){
    float vectoR;
    cout<<"Dame el dato para hacer Push"<<endl;
    cin>>vectoR;
    return vectoR;

}
int poP(int acum3){
    acum3--;
    return acum3;

}