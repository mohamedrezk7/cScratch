// write a programe sum numbers from 1 to n 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void showmessage (){
    cout <<"****************** "<<endl;
    cout <<"pleas enter number "<<endl;
    cout <<"****************** "<<endl;
};
int SumOdd (int n){
        int sum ;
    for (int m=1 ; m<=n ; m++){
        if (m%2==1){
            sum = sum+m;
        }
    };
    return sum;
};
int main(){
    showmessage();
    int x ;
    cin>>x;
    cout<< SumOdd(x);
};