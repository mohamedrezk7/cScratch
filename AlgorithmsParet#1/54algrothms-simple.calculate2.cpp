#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a program to make simple calculate
enum EnCahr { add = '+' , subtract = '-' , multiple = '*' , divide = '/'};
int ReadNumber (string message){
    int num1=0 ;
    cout <<message<<endl;
    cin>>num1;
    return num1;
}
char ReadChar (string message){
    char ch='+' ;
    cout <<message<<endl;
    cin>>ch;
    if      (ch == '+')
    return  ch='+';
    else if (ch=='-')
    return ch = '-';
    else if (ch=='*')
    return  ch = '*';
    else if (ch=='/')
    return ch = '/';
    else return ch = '+';
}
float Calculate (float x , float y , char c){
    
    if (c=='+')
    {
    return (x+y);
    }
    else if (c=='-')
    {
        return (x-y);
    }
     else if (c=='*')
    {
        return (x*y);
    }
     else if (c=='/')
    {
        return (x/y);
    }
    else return (x+y);
}
void PrintResult (float result){
    cout <<"the final result is = "<<result<<endl;
}
int main (){
    PrintResult(Calculate(ReadNumber("pls ent fir num"),ReadChar("pls ent char"),ReadNumber("pleas enr sec num")));
    return 0;
}