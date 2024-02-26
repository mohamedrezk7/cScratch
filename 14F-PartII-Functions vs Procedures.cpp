#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//procedural take 10 , 20 &sum =30
void myprocedural(){
    int x,y;
    cout<<"pleas enter num1  "<<endl;
    cin>>x;
    cout<<"pleas enter num "<<endl;
    cin>>y;
    int sum = x+y;
    cout<<sum<<endl;
}
int mysumfunction(){
    int x,y;
    cout<<"pleas enter num1  "<<endl;
    cin>>x;
    cout<<"pleas enter num2  "<<endl;
    cin>>y;
    int sum = x+y;
    return sum;
}
int main(){
    myprocedural();
    cout<<mysumfunction()<<endl;
}