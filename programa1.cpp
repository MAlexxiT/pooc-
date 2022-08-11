#include <iostream> //biblioteca

using namespace std;

int main(){
    int number1 = 0;
    int number2 = 0;

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
}
