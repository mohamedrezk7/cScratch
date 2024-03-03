#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a program to make simple calculate
void calculate (){
    int num1 , num2; 
    char c ;
    cout <<" please enter first number\n "<<endl;
    cin >> num1;
    cout <<" please enter charcter :+: or :-: or :*: or :/: "<<endl;
    cin >>c;
    cout <<" please enter seconde  number "<<endl;
    cin>>num2;
    switch (c){
        case '+' :
        cout <<"the result is = " <<num1+num2;
        break;
        case '-' :
        cout <<"the result is = " <<num1-num2;
        break;
        case '*' :
        cout <<"the result is = " <<num1*num2;
        break;
        case '/' :
        cout <<"the result is = " <<num1/num2;
        break;
        default :
        cout <<"the result is = " <<num1+num2;
    }
    

}
int main (){
    calculate();
    calculate();
    calculate();
    calculate();
    return 0;
}