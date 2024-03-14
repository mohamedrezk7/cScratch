#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number and Digit then caluculate how many digit repetead 
float  ReadPositiveNumber (string message){
    int number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
int  CalculateCountOFDigit (int digit , int number){
    int reminder = 0 ;
    int numOfDigit = 0 ;

    while (digit > 0 ){
        reminder = digit%10;
        digit = digit / 10 ;
        if (number == reminder)
        {
            numOfDigit ++;
        }

    }
    return numOfDigit ;
}
int main (){
    int digit , num ;
    digit = ReadPositiveNumber("please enter digits");
    num = ReadPositiveNumber("please enter number you want to check");
    cout <<"digit "<<num <<" frequency is " <<CalculateCountOFDigit(digit , num) << " Time(s)"<<endl;
    return 0 ;
}