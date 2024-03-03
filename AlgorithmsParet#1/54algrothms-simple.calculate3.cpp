#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum EnOperationType {ADD = '+' , subtract = '-' , multiply = '*' , Divide ='/'};
float ReadNumber (string message){
    float num=0 ;
    cout<<message<<endl;
    cin>>num;
    return num;
}
EnOperationType ReadOpType (){
    cout << " pleas enter the OP type "<<endl;
    char op = '+';
    cin >>op;
    return (EnOperationType)op;
}
float Calculate (float num1 , EnOperationType OPT , float num2){
    switch (OPT){
        case EnOperationType::ADD:
        return num1+num1;
        case EnOperationType::subtract:
        return num1-num2;
        case EnOperationType::multiply:
        return num1*num2;
        case EnOperationType::Divide:
        return num1/num2;
        default :
        return num1+num2;
    }
}
int main (){
    float num1 , num2 ; 
    num1 = ReadNumber("pleas enter first number ");
    num2 = ReadNumber("pleas enter seconde number ");
    EnOperationType opt = ReadOpType();
    cout <<" the result is = " <<Calculate(num1 , opt , num2)<<endl;
    cout<< "**************************************\n"<<endl;

   float r = Calculate(ReadNumber("enter seconde num"),ReadOpType(),ReadNumber("enter fierst num "));
   cout <<r<<endl;


}
