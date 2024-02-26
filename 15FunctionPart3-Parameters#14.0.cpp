//By-Val vs By-Ref
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void swap(int &num1){
    num1=7000;
    cout <<"number inside function = "<<num1<<endl;
    cout <<"refrence inside function = "<<&num1<<endl;
}
int main (){
    int num1;
    num1=1000;
    swap(num1); //cout result
    cout<<"number after caling the function = "<<num1<<endl;
    cout<<"refrence after caling the function = "<<&num1<<endl;
}