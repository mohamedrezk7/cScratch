#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct str_info {
   string  firstname;
   string  lastname;
   string  phone;
   int     age;
};
void readinfo(str_info &info){
    cout<<"pleas enter first name"<<endl;
    cin>>info.firstname;
    cout<<"pleas enter last name"<<endl;
    cin>>info.lastname;
    cout<<"pleas enter phone "<<endl;
    cin>>info.phone;
    cout<<"pleas enter age "<<endl;
    cin>>info.age;
};
void readpersondinfo(str_info persons[2]){
    readinfo(persons[0]);
    readinfo(persons[1]);
};
void printinfo(str_info infoprint){
    cout<<"******************"<<endl;
    cout<<infoprint.firstname<<endl;
    cout<<infoprint.lastname<<endl;
    cout<<infoprint.phone<<endl;
    cout<<infoprint.age<<endl;
    cout<<"******************"<<endl;
};
void printpersonsinfo(str_info infoprint[2]){
    printinfo(infoprint[0]);
    printinfo(infoprint[1]);
};
int main (){
    str_info person[2];
    readpersondinfo(person);
    printpersonsinfo(person);
};