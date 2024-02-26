#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//Sum Odd Numbers from 1 to N
void SumOddNumbers (){
    cout<<"pleas enter number tu sum odd "<<endl;
    int number ,i=1 , sum=0;
    cin>>number;
    while (number>=i){
        if (i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<sum<<endl;
};
//Sum even Numbers from 1 to N
void SumEvenNumbers (){
    cout<<"pleas enter number tu sum even "<<endl;
    int number ,i=1 , sum=0;
    cin>>number;
    while (number>=i){
        if (i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<sum<<endl;
};
int main (){
    // SumOddNumbers();
    SumEvenNumbers();
    return 0;
};