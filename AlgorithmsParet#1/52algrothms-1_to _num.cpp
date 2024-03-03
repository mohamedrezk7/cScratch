#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int ReadNumber (){
    cout <<" pleas enter number you want to start "<<endl;
    int num ;
    cin>>num;
    return num;
}
void PrintRangeFrom1ToN_UsingForLoop (int num){
    cout <<"Range Printed using FOR ..LOOP"<<endl;
    for (int i =num ; i >=1 ; i--){
        cout <<"number = " <<i<<endl;
    }
}
void PrintRangeFrom1ToN_UsingWhileLoop (int num){
    cout <<"Range Printed using WHILE ..LOOP"<<endl;
    int i=num;
    while ( i>=1 ){
        cout <<"number = " <<i<<endl;
        i--;
    }
}
void PrintRangeFrom1ToN_UsingDoWhileLoop (int num){
    cout <<"Range Printed using DO ... WHILE"<<endl;
     int i=num;
     do{
        i--;
        cout <<"number = "<<i<<endl;
     }while (i>1);
}
int main (){
    PrintRangeFrom1ToN_UsingDoWhileLoop(ReadNumber());
    PrintRangeFrom1ToN_UsingWhileLoop(ReadNumber());
    PrintRangeFrom1ToN_UsingForLoop(ReadNumber());
    int n=ReadNumber();
    PrintRangeFrom1ToN_UsingDoWhileLoop(n);
    PrintRangeFrom1ToN_UsingWhileLoop(n);
    PrintRangeFrom1ToN_UsingForLoop(n);

    return 0;
}