#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to calculate average 3 number and print pass or fail 
enum enpass {pass=1 , fail=2};
void ReadNumbers (int arr[50] , int length ){
    for (int i=0 ; i<=length-1 ; i++){
        cout<<"plaes enter number = "<<i+1<<endl;
        cin >> arr[i];
    }
}
int SumNumbers (int arr[50] , int length ){
    int sum=0;
    for (int i=0 ; i<=length-1 ; i++){
        sum+=arr[i];
        
    }
    return sum;
}
float CalculateAverage (int arr[50] , int length ){
    return (float)SumNumbers(arr , length) / length ;
}
enpass CehckPass (float average){
        if (average >= 50)
        return enpass::pass;
        else 
        return enpass::fail;
}
void PrintResult (float sum){
    cout <<"the sum of numbers is = "<<sum<<endl;
    // if (CehckPass(average)==enpass::pass)
    // cout <<"PASS"<<endl;
    // else 
    // cout <<"FAIL"<<endl;
}
void PrintResultPass (float average){
    cout <<"the averag of  numbers is = "<<average<<endl;
    if (CehckPass(average)==enpass::pass)
    cout <<"PASS"<<endl;
    else 
    cout <<"FAIL"<<endl;
}
int main (){
    int arr[50] , length=3;
    ReadNumbers(arr , length);
    // SumNumbers(arr , length);
    PrintResult(SumNumbers(arr , length));
    PrintResult(CalculateAverage(arr , length));
    PrintResultPass(CalculateAverage(arr , length));
}