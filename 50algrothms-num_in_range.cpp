#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// writ a program to check number in range
int ReadAge (){
    cout <<"pleas enter your age " <<endl;
    int age ;
    cin>>age;
    return age ;
}
bool CheckNumberInRange (int num , int from , int to){
    return (num >= from && num <= to);
}
void PrintResult (int age){
    if (CheckNumberInRange(age , 18 , 45))
    cout <<" is a valid age "<<endl;
    else 
    cout <<" is invalid age " <<endl;
}
int main (){
    PrintResult(ReadAge());
    PrintResult(ReadAge());
    PrintResult(ReadAge());
    PrintResult(ReadAge());
}