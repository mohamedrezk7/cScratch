#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number from user and print it reversed order 
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
    int reminder = 0 ;
    while (number > 0 ){
        reminder = number%10;
        number = number /10 ;
        cout<<reminder<<endl;
        // cout <<"infinity";
    };
}
int main (){
PrintReversedGigit(ReadPositiveNumber("pleas enter positive number"));
}