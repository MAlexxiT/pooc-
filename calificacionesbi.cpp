#include "bits/stdc++.h"
using namespace std;

int main(){
    float num;
    float arr[5][5];
    float promedio=0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i][i]=0;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"Ingresa la calificacion del indice ["<<i<<"] ["<<j<<"] :";
            cin>>num;
            arr[i][j]=num;
            cout<<"La calificacion en el indice ["<<i<<"] ["<<j<<"] es: "<<arr[i][j]<<endl<<endl;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            promedio+=arr[i][j];
        }
    }
    
    cout<<"El promedio final del grupo es: "<<promedio/(5*5)<<endl;
    
}