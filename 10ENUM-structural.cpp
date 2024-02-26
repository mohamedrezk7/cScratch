#include <iostream>
#include <cmath>
using namespace std;
struct staddress{
    string streetname;
    string buildingno;
    string ppo ;
    string zipbox;
};
struct stcontactinfo {
    string phone;
    string email;
    staddress address;
};
enum encolor{red,green,blue};
enum engender{male,female};
enum enmaritalstatus{married,single};
struct stperson{
    string firstname;
    string lastname;
    stcontactinfo contactinfo;
    encolor color;
    enmaritalstatus maritalstatus;
    engender gender;
};


int main(){
    stperson person1;
    encolor color;
    enmaritalstatus maritalstatus;
    engender gender;
    person1.firstname="moahmed";
    cout<<person1.firstname<<endl;
    person1.lastname="rezk";
    person1.contactinfo.email="moahmedrezk013@gmail.com";
    person1.contactinfo.phone="01099653207";
    person1.contactinfo.address.streetname="nawa";
    person1.contactinfo.address.buildingno="7";
    person1.contactinfo.address.ppo="1777";
    person1.contactinfo.address.zipbox="12345";
    person1.color=encolor::blue;
    person1.maritalstatus=enmaritalstatus::married;
    person1.gender=engender::male;
    cout<<person1.gender<<endl;

    cout<<"pleas enter first name"<<endl;
    cin>>person1.firstname;
    string firstn=person1.firstname;
    cout<<firstn<<endl;
    cout<<"pleas enter last name"<<endl;
    cin>>person1.lastname;
    cout<<"pleas enter email "<<endl;
    cin>>person1.contactinfo.email;
    cout<<"pleas enter phon number "<<endl;
    cin>>person1.contactinfo.phone;
    cout<<"pleas enter street name "<<endl;
    cin>>person1.contactinfo.address.streetname;
    cout<<"pleas enter buildinf no"<<endl;
    cin>>person1.contactinfo.address.buildingno;
    cout<<"pleas enter ppo "<<endl;
    cin>>person1.contactinfo.address.ppo;
    cout<<"pleas enter zipbox"<<endl;
    cin>>person1.contactinfo.address.zipbox;
    cout<<"pleas enter color"<<endl;
    person1.color=encolor::blue;
    return 0;

};