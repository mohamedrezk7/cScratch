#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to read a number from user and print it reversed order 
enum EnPerfectNumber {perfect = 1 , notperfect =2 };
int  ReadPositiveNumber (string message){
    int number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
void PrintReversedNumbers (int num){
    string st = to_string (num);
    for (int i=1 ; i <= st[0] ; i++);
}
int main (){

}