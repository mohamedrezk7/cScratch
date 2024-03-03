#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber (string message){
    float num=0 ;
    cout<<message<<endl;
    cin>>num;
    return num;
}
float SumNumbers (){
    int sum =0 , num =0 , counter=1;
    do {
        num = ReadNumber("please enter number = " + to_string (counter));
        if (num == -99){
            break;
        }
        sum= sum+num;
        counter++;

    } while (num !=-99);
    
    return sum;
};
int main (){
    cout <<endl <<"result= "<<SumNumbers()<<endl;
    return 0 ;
}