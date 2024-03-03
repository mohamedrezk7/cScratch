#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to print perfect nuber from 1 TO N 
enum EnPerfectNumber {perfect = 1 , notperfect =2 };
int  ReadPositiveNumber (string message){
    int number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
int SumPerfectNumber (int num){
    int sum = 0 ;
        for (int i = 1 ; i <num ; i++){
            if (num % i == 0){
                sum +=i;
            }
        }
        return sum ;
}
EnPerfectNumber ChechPerfectNumber (int num){
        if (SumPerfectNumber(num)==num){
            return EnPerfectNumber::perfect;
        }
        else
        return EnPerfectNumber::notperfect; 

}
void PrintResult (int num ){
    for (int i =1 ; i <=num ; i++){
    if (ChechPerfectNumber(i)==EnPerfectNumber::perfect){
        cout <<i<<"  is perfect number  " <<endl;
        }
        }
} 
int main (){
    int x = ReadPositiveNumber("pleas enter positive number ");
    PrintResult(x);
    PrintResult(ReadPositiveNumber("pleas enter positive number"));
    PrintResult(ReadPositiveNumber("pleas enter positive number"));
    return 0 ;
}