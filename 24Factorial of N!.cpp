// write a programe to calculat factorail of n 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void showmessage (){
    cout <<"****************** "<<endl;
    cout <<"pleas enter number "<<endl;
    cout <<"****************** "<<endl;
};
int factorial (int n)
{
        int factorial=1 ;
        for (int m=n ; m>=1 ; m--){
            factorial=factorial*m;
        }
        
    return factorial;
};
int main(){
    showmessage();
    int x ;
    cin>>x;
    cout<< factorial(x);
};