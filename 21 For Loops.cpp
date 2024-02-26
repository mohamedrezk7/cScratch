// write a programe print numbers from 1 to n 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void usermessage(){
    cout <<"*******************"<<endl;
    cout <<"pleas enter your choice nuber"<<endl;
    cout <<"*******************"<<endl;
};
int readnumer(){
int x;
cin>>x;
return x;
};
void  doloop(int y){
for(int m=1 ; m<=y ; m++){
    cout << "subhan allah " << m <<endl;
}
};
int main(){
    usermessage();
    doloop(readnumer());
};