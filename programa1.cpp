#include <iostream> //biblioteca

using namespace std;

int main(){
    int number1 = 0;
    int number2 = 0; //declaracion de la variable (tipo de dato, identificador de la variable) = inicializacion de la variable

    cout<<"Emter two integers to compare: ";
    cin>> number1 >>number2;
    if(number1==number2){
        cout<<number1<<"=="<<number2<<endl;
    }
    if(number1!=number2){
        cout<<number1<<"!="<<number2<<endl;
    }
    if(number1<number2){
        cout<<number1<<"<"<<number2<<endl;
    }
    if(number1>number2){
        cout<<number1<<">"<<number2<<endl;
    }
    if(number1<=number2){
        cout<<number1<<"<="<<number2<<endl;
    }
    if(number1>=number2){
        cout<<number1<<">="<<number2<<endl;
    }
}
