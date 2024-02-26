#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// program to print your name 
string ReadNmae (){
    cout <<"plaes enter your name here "<<endl;
    string name;
    getline (cin , name);
    return name;
}
void PrintName (string name ){
    cout<<"your name is =  "<< name <<endl;
}
int main (){
    PrintName(ReadNmae());
}