#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//power of m 
void PowerOfm (){
    cout << "pleas enter number and m "<<endl;
    int number , m ,p=1,i=1;
    cout << "pleas enter number "<<endl;
    cin>>number;
    cout << "pleas enter m "<<endl;
    cin>>m;
    while (i<=m){
        p*=number;
        i++;
    }
    cout<<p<<endl;
};
int main (){
    PowerOfm();
};