#include "bits/stdc++.h"
using namespace std;

int main(){
    float num;
    string materia;
    map <int,string> mp;
    int n,m;
    
    float promedio=0;

    cout<<"Ingresa el numero de estudiantes: ";
    cin>>n;
    cout<<"Ingresa el numero de materias: ";
    cin>>m;
    float **arr= new float*[n];
    for (int i = 0; i < m; i++)
    {
        cout<<"Asigna la materia al numero "<<i+1<<" : ";
        cin>>materia;
        mp[i+1]=materia;
    }
    
    for(int i =0; i<n;i++){
        arr[i] = new float[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]=0;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Ingresa la calificacion del estudiante "<<i+1<<" en la materia "<<mp[j+1]<<" :";
            cin>>num;
            arr[i][j]=num;
            cout<<"La calificacion del estudiante "<<i+1<<" en la materia "<<mp[j+1]<<" es: "<<arr[i][j]<<endl<<endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            promedio+=arr[i][j];
        }
    }
    
    cout<<"El promedio final del grupo es: "<<promedio/(n*m)<<endl;
    
}
