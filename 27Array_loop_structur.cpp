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
void readpersondinfo(str_info persons[10], int& nOfpersons){
        cout<<"pleas enter number of persons " <<endl;
       cin>> nOfpersons;
    for (int i =0 ;i<=nOfpersons-1 ; i++){
        readinfo(persons[i]);
    // cout<<"pleas enter first name"<<endl;
    // cin>>persons[i].firstname;
    // cout<<"pleas enter last name"<<endl;
    // cin>>persons[i].lastname;
    // cout<<"pleas enter phone "<<endl;
    // cin>>persons[i].phone;
    // cout<<"pleas enter age "<<endl;
    // cin>>persons[i].age;
    }
};
void printinfo(str_info infoprint){
    cout<<"******************"<<endl;
    cout<<infoprint.firstname<<endl;
    cout<<infoprint.lastname<<endl;
    cout<<infoprint.phone<<endl;
    cout<<infoprint.age<<endl;
    cout<<"******************"<<endl;
};
void printpersonsinfo(str_info infoprint[10], int nOfp){
    
    for (int i=0 ; i<=nOfp-1 ; i++){
        printinfo(infoprint[i]);
    // cout<<"******************"<<endl;
    // cout<<infoprint[i].firstname<<endl;
    // cout<<infoprint[i].lastname<<endl;
    // cout<<infoprint[i].phone<<endl;
    // cout<<infoprint[i].age<<endl;
    // cout<<"******************"<<endl;

    };  
};
int main (){
    str_info person[10];
    int nOfper;
    readpersondinfo(person,nOfper);
    printpersonsinfo(person,nOfper);
    return 0;
};