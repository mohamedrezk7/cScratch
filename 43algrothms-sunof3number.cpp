#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to calculate 3 numbers and print result 
void ReadNumbers (int &num1 , int& num2 , int &num3 ){
    cout <<" : please enter number 1"<<endl;
    cin>>num1;
    cout <<" : please enter number 2"<<endl;
    cin>>num2;
    cout <<" : please enter number 3"<<endl;
    cin>>num3;
}
int SumNumbers (int number1 , int number2 , int number3 ){
    return number1+number2+number3;
}
void PrintResult (int total){
    cout <<"the sum of numbers is = "<<total<<endl;
}
int main (){
    int num1 , num2 , num3 ;
    ReadNumbers(num1 , num2 ,num3 );
    PrintResult(SumNumbers(num1 , num2 , num3));
   
}