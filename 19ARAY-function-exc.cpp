#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void readgrade(float grade[3]){
    cout <<"pleas enter grade number1"<<endl;
    cin>>grade[0];
    cout <<"pleas enter grade number2"<<endl;
    cin>>grade[1];
    cout <<"pleas enter grade number3"<<endl;
    cin>>grade[2];
};
float fun_average(float grade[3]){
   float  average =(grade[0]+grade[1]+grade[2]) / 3;
    return average ;
};
void printgrade(float average){
    cout<<"the average is equal = "<<average<<endl;
};
int main(){
    float person1[3];
    readgrade(person1);
    // fun_average(person1);
    printgrade(fun_average(person1));
};