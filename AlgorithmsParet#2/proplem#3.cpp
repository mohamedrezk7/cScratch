#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write a programe to Check  perfect number or not 
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
    if (ChechPerfectNumber(num)==EnPerfectNumber::perfect){
        cout <<num<<"  is perfect number  " <<endl;
        }
        else 
        cout <<num << "  is not perfect number "<<endl;

} 
int main (){
    int x = ReadPositiveNumber("pleas enter positive number ");
    PrintResult(x);
    PrintResult(ReadPositiveNumber("pleas enter positive number"));
    PrintResult(ReadPositiveNumber("pleas enter positive number"));
    return 0 ;
}