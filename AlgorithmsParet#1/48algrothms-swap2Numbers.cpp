#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to Swap tow numbers
void ReadNumbers (int &num1 , int &num2 ){
    cout <<"pleas enter num1 "<<endl;
    cin>>num1;
    cout <<"pleas enter num2 "<<endl;
    cin>>num2;
}
void  Swap (int &A , int &B){
int temp;
temp = A;
A=B;
B=temp;
}
void PrintNumbers (int c , int d ){
    cout <<"number 1 =    " <<c<<endl;
    cout <<"number 2 =  \n" <<d<<endl;
}
int main (){
    int num1 , num2 ;
    ReadNumbers(num1 , num2 );
    PrintNumbers(num1 , num2 );
    Swap(num1, num2);
    PrintNumbers(num1 , num2);
    return 0 ;
}