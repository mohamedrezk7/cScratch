#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// factorial of n!
void FactorialNumber (){
    cout <<"pleas enter number to calculat factorial "<<endl;
    int number , i=1 , fact=1;
    cin>>number;
    while (number<0){
        cout<<"pleas enter positive number"<<endl;
        cin>>number;
    }
    while (number>=i){
        
        fact *= number;
        number--; 
    }
    cout<<fact<<endl;
};
int main (){
    FactorialNumber();
    return 0;
};