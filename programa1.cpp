#include <iostream> //biblioteca

/*using std::cout;
std::cin;
std::endl; se utiliza para da un salto de linea*/
using namespace std; // da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.

int main(){
    int number1 = 0;
    int number2 = 0; //declaracion de la variable (tipo de dato, identificador de la variable) = inicializacion de la variable
    int number3= 0;

    cout<<"Emter two integers to compare: "; //flujo de salida
    cin>> number1 >>number2>>number3; //flujo de entrada
    if(number1==number2 && number2==number3){ //Es una condicional de comparacion
        cout<<number1<<"=="<<number2<<"=="<<number3<<endl; //imprime la comparacion si la condicion se cumple
    }
    if(number1!=number2 && number2 != number3){
        cout<<number1<<"!="<<number2<<"!="<<number3<<endl;
    }
    if(number1==number2 && number2 != number3){
        cout<<number1<<"=="<<number2<<"!="<<number3<<endl;
    }
    if(number1!=number2 && number2 == number3){
        cout<<number1<<"!="<<number2<<"="<<number3<<endl;
    }
    if(number1<number2 && number2 < number3){
        cout<<number1<<"<"<<number2<<"<"<<number3<<endl;
    }
    if(number1>number2 && number2 > number3){
        cout<<number1<<">"<<number2<<">"<<number3<<endl;
    }
    if(number1<number2 && number2 > number3){
        cout<<number1<<"<"<<number2<<">"<<number3<<endl;
    }
    if(number1>number2 && number2 < number3){
        cout<<number1<<">"<<number2<<"<"<<number3<<endl;
    }
    if(number1<=number2 && number2<=number3){
        cout<<number1<<"<="<<number2<<"<="<<number3<<endl;
    }
    if(number1>=number2 && number2>=number3){
        cout<<number1<<">="<<number2<<">="<<number3<<endl;
    }
    if(number1<=number2 && number2>=number3){
        cout<<number1<<"<="<<number2<<">="<<number3<<endl;
    }
    if(number1<=number2 && number2>=number3){
        cout<<number1<<"<="<<number2<<">="<<number3<<endl;
    }
    cout<< "El promedio es: "<<(number1+number2+number3)/3<<endl; //imprime el promedio de los 3 numeros
}
