#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number and Digit then caluculate how many digits repetead 
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
void PrintAllDigitsFrequncy (int number){
    for (int i = 0 ; i <10 ; i++ ){
       short  frequncydigits = 0 ;
       frequncydigits = CalculateCountOFDigit(number , i );
       if(frequncydigits>0){
       cout <<"digit "<< i<<" frequency is " <<frequncydigits<< " Time(s)"<<endl;    
    }
    }
}
int main (){
    int num;
    num = ReadPositiveNumber("please enter digits");
    PrintAllDigitsFrequncy(num);
    PrintAllDigitsFrequncy(ReadPositiveNumber("rnter number "));
    PrintAllDigitsFrequncy(ReadPositiveNumber("enter number"));
    // cout <<CalculateCountOFDigit(87878787 , 8);
    return 0 ;
}