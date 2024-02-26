#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a programe to get firstName & last name then print it
struct stinfo {
    string firstname;
    string lastname;
};
stinfo ReadInfo (){
    stinfo info;
    cout <<"pleas enter your first name"<<endl;
    cin>>info.firstname;
    cout<<"pleas enter your last name "<<endl;
    cin>>info.lastname;
    return info;
};
string Getfullname (stinfo info , bool reversed){
    string fullname = "";
    if (reversed)
    fullname= info.lastname + " " + info.firstname;
    else
    fullname = info.firstname + " " + info.lastname;

    return fullname; 
}
void PrintFullName (string fullname ){
    cout<<" your full name is = " <<fullname<<endl;
}
int main (){
    PrintFullName(Getfullname(ReadInfo() , true));
    return 0;
}