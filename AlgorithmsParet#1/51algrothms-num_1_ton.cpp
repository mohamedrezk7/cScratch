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
    for (int i =1 ; i <=num ; i++){
        cout <<"number = " <<i<<endl;
    }
}
void PrintRangeFrom1ToN_UsingWhileLoop (int num){
    cout <<"Range Printed using WHILE ..LOOP"<<endl;
    int i=1;
    while ( i<=num ){
        cout <<"number = " <<i<<endl;
        i++;
    }
}
void PrintRangeFrom1ToN_UsingDoWhileLoop (int num){
    cout <<"Range Printed using DO ... WHILE"<<endl;
     int i=0;
     do{
        i++;
        cout <<"number = "<<i<<endl;
     }while (i<num);
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