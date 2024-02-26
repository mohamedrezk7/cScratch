#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// using while loop do this read a positive number 
void ReadPositiveNum (){
cout <<"pleas enter positive number "<<endl;
int number;
cin>>number;
while ( number < 0 ){
    cout<<"wrong inpute __ pleas enter number again "<<endl;
    cin>>number;    
}
cout <<"the positive number is = "<< number <<endl;
}

// using while loop do this read a number betwen tow numbrs
int CheckRangeOfNumber (int from , int to ){
int number ;
cout<<"pleas enter number from = "<< from << "to = "<< to <<endl;
cin>>number;

    while (number < from || number > to){
        cout <<"wrong number "<<endl;
        cout<<"pleas enter number betwen-" <<from << "to-"<<to<<endl;
        cin >>number;
    }

    return number ;

};
int main (){
    
   cout <<"\n the number is "<<CheckRangeOfNumber(20,30)<<endl;
};