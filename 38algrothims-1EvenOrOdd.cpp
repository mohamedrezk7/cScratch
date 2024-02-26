#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// check number even or odd
int ReadNumber (){
    cout <<"pleas enter number here to check even or odd "<<endl;
    int number ;
    cin>>number;
    return number;
}
bool CheckNumberType (int num ){
    if (num%2==0){
        return true ;
    }
    else 
    return false;
}
void PrintNumberType (bool num ){
    if (num){
        cout <<"number is even "<<endl;
    }
    else 
    cout <<"number is odd"<<endl;
}
//other way by enum 
enum ENnumberType {odd=1 , even=2};
ENnumberType CheckNumber (int num ){
    int result=num%2;
    if (result==0){
        return ENnumberType::even;
    }
    else return ENnumberType::odd;
}

void PrintNumber (ENnumberType num){
    if (num==ENnumberType::even)
        cout<<"the number is = even "<<endl;
        else 
        cout <<"teh number is odd "<<endl;
}
int main (){
    PrintNumberType(CheckNumberType(ReadNumber()));
    PrintNumber(CheckNumber(ReadNumber()));
}