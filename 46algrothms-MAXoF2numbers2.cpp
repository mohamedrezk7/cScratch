#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadNumbers (int &num1 , int &num2 ){
    cout <<"pleas enter first number"<<endl;
    cin >>num1;
    cout <<"pleas enter seconde number"<<endl;
    cin>>num2;
}
int CehckMax (int num1 , int num2){
    if (num1>num2)
    return num1;
    else 
    return num2;
}
void PrintResult (int num){
    cout <<"the max number is = "<<num<<endl;
}
int main (){
    int num1 , num2 ;
    ReadNumbers(num1 , num2);
    PrintResult(CehckMax(num1 , num2 ));
}