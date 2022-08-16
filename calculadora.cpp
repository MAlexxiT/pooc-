#include "bits/stdc++.h"
using namespace std;
float suma(float a, float b){
    return a+b;
}
float resta(float a, float b){
    return a-b;
}
float multi(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}

int main(){
    int num;
    float a,b, res=0.0;

    do
    {
        cout<<"Ingresa el valor a: ";
        cin>>a;
        cout<<"Ingresa el valor b: ";
        cin>>b;
        cout<<"CALCULADORA"<<endl<<"0. Salir"<<endl<<"1. Suma"<<endl<<"2. Resta"<<endl<<"3. Multiplicacion"<<endl<<"4. Division"<<endl<<"Ingresa que operacion desea realizar: ";
        cin>>num;
        switch (num)
        {
            case 1:
                res= suma(a,b);
                cout<<"La suma de a y b es: "<<res<<endl;
                
                break;
            case 2:
                res= resta(a,b);
                cout<<"La resta de a y b es: "<<res<<endl;
                
                break;
            case 3:
                res= multi(a,b);
                cout<<"La multiplicacion de a y b es: "<<res<<endl;
                
                break;
            case 4:
                res= div(a,b);
                cout<<"La division de a y b es: "<<res<<endl;
                
                break;
            
            default:
                break;
        }   
    } while (num!=0);
    
    
}