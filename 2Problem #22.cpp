//Circle Area Inscribed in an Isosceles Triangle
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    //Circle Area Inscribed in an Isosceles Triangle
    // area = pi * b^2 / 4 * ( 2*a-b / 2*a+b)

    float  pi = 3.14;
    float  a , b , area;
    cout<<"pleas enter A " << endl;
    cin>> a;
    cout<<"pleas enter B " << endl;
    cin>> b;
    area = pi*( (pow(b,2)) /4 ) * ( (2*a-b) / (2*a+b) );
    cout<< area <<endl ;



}