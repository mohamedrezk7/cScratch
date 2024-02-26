// write a programe to find pow of n by m 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void showmessage (){
    cout <<"****************** "<<endl;
    cout <<"pleas enter number "<<endl;
    cout <<"pleas enter m "     <<endl;
    cout <<"****************** "<<endl;
};
int poww ( int n , int m )
{
        int p;
        for (int i=1 ; i<=m ; i++ ){
            p = n*i;
        }
        
    return p ;
};
int main(){
    int p=1,n,m;
    cin>>n;
    cin>>m;
        for (int i=1 ; i<=m ; i++ ){
             p= p*n;
        }
        for (int i=64 ; i<=90 ; i++ ){
            cout<<char(i);    
        }
        
        cout<<p<<endl;
        cout<<pow(2,3);
    
};