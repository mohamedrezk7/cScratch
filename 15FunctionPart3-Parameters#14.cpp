#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void myswapnumber(){
    int swap ,x,y ;
    cout<<"pleas rnter tow number 1 "<<endl;
    cin>>x;
    cout<<"pleas rnter tow number  "<<endl;
    cin>>y;
    swap=x;
    x=y;
    y=swap;
    cout<<x<<endl;
    cout<<y<<endl;
}
int myswapnumber1(int x ,int y){
    int swap;
    swap=x;
    x=y;
    y=swap;
    return x,y;
}
int main(){
    //  myswapnumber();
    int a,b;
    cout<<"pleas enter frist nmuber "<<endl;
    cin>>a;
    cout<<"pleas enter second number"<<endl;
    cin>>b;
    cout<<myswapnumber1(a,b)<<endl;

}