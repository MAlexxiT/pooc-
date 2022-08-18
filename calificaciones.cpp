#include "bits/stdc++.h"
using namespace std;

int main(){
    float num;
    float arr[5];
    float promedio=0;
    for (int i = 0; i < 5; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa la calificacion del indice "<<i<<" : ";
        cin>>num;
        arr[i]=num;
        cout<<"La calificacion en el indice "<<i<<" es: "<<arr[i]<<endl<<endl;
        promedio+=arr[i];
    }
    cout<<"El promedio final es: "<<promedio/5<<endl;
    
}