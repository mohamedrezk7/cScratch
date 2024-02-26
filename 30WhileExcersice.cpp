#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//Print Numbers from 1 to N
void PrintNumberFrom1Ton (){
 cout <<"pleas wnter number "<<endl;
 int number , i=1;
 cin>>number;
 while (i<=number){
    cout<<i<<endl;
    i++;
 };
 cout<<"the loop ended "<<endl;   
}
//Print Numbers from n to 1
void PrintNumberFromNto1 (){
cout <<"pleas wnter number "<<endl;
int number , i=1;
cin>>number;
 while (number>=i){
    cout<<number<<endl;
    number--;
 };
 cout<<"the loop ended "<<endl;
};
int main (){
    // PrintNumberFrom1Ton();
    PrintNumberFromNto1();
}