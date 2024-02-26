#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//Sum Until -99
void SumUntil99 (){
    cout<<"pleas enter any number to sum it & 99 to stop"<<endl;
    int num , sum;
    cin>>num;
    while (num != 99){
        sum+=num;
        cout<<"enter next number "<<endl;
        cin>>num;
    }
    cout<<sum<<endl;
}
int main (){
    SumUntil99();
    return 0;
}