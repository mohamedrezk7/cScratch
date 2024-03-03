#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a programe get tow numbers then retyrn wich of them bigeer
struct stTowNum {
    int num1 ;
    int num2 ;
    int num3 ;
};
void ReadNumbers (stTowNum &tow){
    cout <<"pleas enter tow numbers to print max of them "<<endl;
    cout <<"*********************************** "<<endl;

    cout <<"pleas enter first number "<<endl;
    cin>>tow.num1;
    cout <<"pleas enter seconde number "<<endl;
    cin>>tow.num2;
    cout <<"pleas enter therd number "<<endl;
    cin>>tow.num3;
}
int CeckMax (stTowNum tow ){
        if (tow.num1>tow.num2 && tow.num1>tow.num3)
        return  (int)tow.num1;
        else if (tow.num2>tow.num1 && tow.num2 > tow.num3)
        return (int)tow.num2;
        else  
        return  (int)tow.num3;
}
void PrintResult (int tow){
        cout << "the max of three numbers is = " << tow <<endl;
}
int main (){
    stTowNum tow;
    ReadNumbers(tow);
    PrintResult(CeckMax(tow));
    ReadNumbers(tow);
    PrintResult(CeckMax(tow));
    ReadNumbers(tow);
    PrintResult(CeckMax(tow));
    
}