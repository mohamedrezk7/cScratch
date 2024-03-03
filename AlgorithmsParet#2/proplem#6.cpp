#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number from user and print the of its digits 
enum EnPerfectNumber {perfect = 1 , notperfect =2 };
float  ReadPositiveNumber (string message){
    int number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
void PrintReversedGigit (int number){
    int reminder = 0 , sumdigits = 0 ;

    while (number > 0 ){
        reminder = number%10;
        number = number /10 ;
        (sumdigits+=reminder);
        // cout <<"infinity";
    };
    cout << " sum OF Digits is = " <<sumdigits<<endl;
}
int main (){
PrintReversedGigit(ReadPositiveNumber("pleas enter positive number"));
}