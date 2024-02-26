#include <iostream>
#include <cmath>
using namespace std;
enum color {
red , green , blue ,black
};
struct addres {
    string addres1,addres2,addres3;
};
struct stowner{
    string name , nat ,addres1,addres2,addres5 ,addres7;
    int age , salary;
    addres myaddres;
}
struct car {
        string name , model , country;
        int year , cc;
        stowner owner;
    };
int main(){
    car car1 ,car2;
    car1.cc=3000;
    car1.year=2022;
    car1.country="america";
    car1.model="models";
    car1.name ="tesla";
    stowner owner;
    color mycolor;
    mycolor = color::black;
    car1.owner.age=50;
    car1.owner.myaddres.addres1;
    car2.owner.myaddres;
    cout<<car1.cc<<" "<<car1.country<<" "<<car1.model<<" "<<car1.name<<" "<<car1.year<<endl;
    
}