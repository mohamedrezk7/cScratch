#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a programe get tow numbers then retyrn wich of them bigeer
struct stTowNum {
    int num1 ;
    int num2 ;
};
stTowNum ReadNumbers (){
    cout <<"pleas enter tow numbers to print max of them "<<endl;
    cout <<"*********************************** "<<endl;
    stTowNum tow ;
    cout <<"pleas enter first number "<<endl;
    cin>>tow.num1;
    cout <<"pleas enter seconde number "<<endl;
    cin>>tow.num2;
    return tow;
}
int CeckMax (stTowNum tow ){
        if (tow.num1>tow.num2)
        return  (int)tow.num1;
        else 
        return  (int)tow.num2;
}
void PrintResult (int tow){
        cout << "the max of tow numbers is = " << tow <<endl;
}
int main (){
    PrintResult(CeckMax(ReadNumbers()));
}