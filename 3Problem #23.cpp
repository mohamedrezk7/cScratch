#include <iostream>
#include <cmath>
using namespace std;
int main(){

    //Circle Area circle Described Around an Arbitrary Triangle
    // area = pi * pow ((a*b*c  / 4 * (sqrt(p* (p-a) * (p-b) * (p-c) ))  ) , 2)
    // p = (a+b+c) / 2 

    float  pi = 3.14;
    float  a , b , c , p , area;
    cout<<"pleas enter A " << endl;
    cin>> a;
    cout<<"pleas enter B " << endl;
    cin>> b;
    cout<<"pleas enter c " << endl;
    cin>> c;
    p = (a+b+c)/2;
    
    area = round (pi * ( pow  ( ( (a*b*c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c) ) ) ), 2 )  ) );

    cout<< area <<endl ;

}