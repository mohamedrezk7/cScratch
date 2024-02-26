#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//ATM PIN 3 Times
void Atm_pin_3tims (){
    cout <<"plaes enter password "<<endl;
    int pin ,i=0;
    cin>>pin;
    if (pin==1234){
        cout<<"write pin congrat"<<endl;
    }
    else {
        while (pin != 1234 && i != 3){
            cout<<"wrong pin pleas try again">>endl;
            cin>>pin;
            i++;
        }
        
    }
    }
int main (){
    Atm_pin_3tims();
}