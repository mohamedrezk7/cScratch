#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void proc_printmyname(){
    cout<<"mohamed rezk mohamed "<<endl;
}
void proc_printusername(){
    cout<<"pleas enter your name"<<endl;
    string name;
    cin>>name;
    cout<<"your name is = "<<name<<endl;
}
string func_myname(string name){
    return name;
}
int main (){
    proc_printmyname();
    proc_printusername();
    string name;
    cout<<"pleas enter your name"<<endl;
    cin>>name;
   cout<<"ror name is "<< func_myname(name)<<endl;


}