#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to find half of n
float ReadNumber (){
    float number;
    cout <<"pleas enter number here "<<endl;
    cin>>number;
    return number;
}
float FindHalf (float num){
    int half;
    half = num / 2;
    return (float) half;
}
void PrintResult (int num){
    string result ="the half of " + to_string (num) + " is =" + to_string (FindHalf(num));
    cout <<result<<endl; 
}
int main (){
    // PrintResult(FindHalf(ReadNumber()));
    PrintResult(ReadNumber());
}