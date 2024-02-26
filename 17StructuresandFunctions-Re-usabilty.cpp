#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct st_info {
    string firstname;
    string lastname;
    string phone;
    int age;
};
void readinfo(st_info info){
    cout <<"pleas enter your firstname"<<endl;
    cin>>info.firstname;

    cout <<"pleas enter your lastname"<<endl;
    cin>>info.lastname;

    cout <<"pleas enter your firstname"<<endl;
    cin>>info.phone;

    cout <<"pleas enter your age "<<endl;
    cin>>info.age;
};
void printinfo(st_info info)
{
    cout<<"*********************"<<endl;
    cout <<"first name = "<<info.firstname<<endl;
    cout <<"last name = "<<info.lastname<<endl;
    cout <<"phone number = "<<info.phone<<endl;
    cout <<"age = "<<info.age<<endl;
    cout<<"*********************"<<endl;
};
int main (){
    st_info person1,person2;
    readinfo(person1);
    printinfo(person1);
};
