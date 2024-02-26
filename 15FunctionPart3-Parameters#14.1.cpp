#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//by value and by ref
void myswapnumber(int &x , int &y ){
    int swap ;
    swap=x;
    x=y;
    y=swap;
    cout<<"after swap in viod function\t" << "x =" <<x << "\ty =" <<y <<endl;
}
// int myswapnumber1(int x ,int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     return x,y;
// }
int main()
{
    int a,b;
    cout<<"pleas enter a "<<endl;
    cin>>a;
    cout<<"pleas enter b "<<endl;
    cin>>b;
    cout<<"be for swap \t\t\t"<<"a ="<<a<< "\tb =" <<b<<endl;
     myswapnumber(a,b);
     cout<<"after swap inside main function\t" <<"a =" <<a <<"\tb =" <<b<<endl;
}