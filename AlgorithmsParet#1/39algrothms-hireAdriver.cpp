#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to hire a driver with age=from 21 to 40 &have license
 int ReadAge (){
    cout<<"plaes enter your age here "<<endl;
    int age;
    cin>>age;
    return age ;
 }
 bool HaveLicense (){
    cout<<"do you have a license enter = 1=yes  or 2=no "<<endl;
    int num ;
    cin>>num;
    if (num==1)
    return true;
    else 
    return false;
 }
 void CheckStatus (int age , bool license){
    if (age>=20 && age<=40 && license ){
        cout<<"you are hired "<<endl;
    }
    else 
    cout <<"you are not hired"<<endl;

 }
 // way unm=2 -> write a programe to hire a driver with age=from 21 to 40 & have license
 struct stinfo {
   int age;
   bool hasdrivinglicense;
   bool haveRecommendation;
 };
 stinfo ReadDriverInfo (){
   stinfo info ;
   cout <<"pleas enter your age "<<endl;
   cin>>info.age;
   cout <<"pleas do you have license"<<endl;
   cin >>info.hasdrivinglicense;
   cout <<"pleas do you have Recommendation"<<endl;
   cin>>info.haveRecommendation;
   return info;
 };
 bool IsAccepted (stinfo info ){
   // if (info.age>21 && info.age<40 && info.hasdrivinglicense){
   //    return true ;
   // }
   // else 
   // return false ;
   if(info.haveRecommendation)
   {
   return true;
   }
   else
   { 
   return (info.age>21 && info.age<40 && info.hasdrivinglicense);
   }
 }
 void PrintResult (stinfo info){
   if (IsAccepted(info))
   cout <<"hired"<<endl;
   else 
   cout<<"rejected"<<endl;
 };
 int main (){
    PrintResult(ReadDriverInfo());
    return 0;
 }