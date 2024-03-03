#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/* write a program to read the atm pin code from user the check if bin code = 1234 the show the balance to user 
otherwise print wrong number and ask user to enter the pin again*/ 
int ReadPositiveNumber (string message){
    float number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
bool CheckPinNuber (){
    int PinCode = 0  , counter = 3 ; 
    do {

      PinCode = ReadPositiveNumber("please enter PIN Code ");
      if (PinCode==1234){
        return 1 ;
      }
      else {
        cout <<" wrong PIN  you have  "<< counter - 1 << " more try then card locked "<<endl;
      }  
      counter -- ;

    }while (PinCode !=1234 && counter > 0 ) ;
    return 0; 
}

int main (){
    if (CheckPinNuber()){
        cout <<" the balance is = 7500"<<endl;
    }
    else 
    cout << "your care is locked "<<endl;
        return 0 ;
}