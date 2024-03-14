#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number from user and print same number reversed 
float  ReadPositiveNumber (string message){
    int number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
int  PrintReversedGigit (int number){
    int reminder = 0 , number2= 0 ;

    while (number > 0 ){
        reminder = number%10;
        number = number / 10 ;
        number2 = number2 * 10 + reminder;

    };
    return number2 ; 
}
int main (){
cout << "\nthe reversed number is\n "
<<PrintReversedGigit(ReadPositiveNumber("pleas enter positive number"))<<endl;
}