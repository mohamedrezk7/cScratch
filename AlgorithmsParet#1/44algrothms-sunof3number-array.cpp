#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to calculate 3 numbers and print result 
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
void PrintResult (float total){
    cout <<"the sum of numbers is = "<<total<<endl;
}
int main (){
    int arr[50] , length=3;
    ReadNumbers(arr , length);
    // PrintResult(SumNumbers(arr , length));
    PrintResult(CalculateAverage(arr , length));
}