#include <iostream>
using namespace std;
#include <cmath>
int main(){
    // round & sqrt 
    cout <<round(sqrt(50))<<endl;
    cout <<round(2.1)<<endl; //gives 2
    cout <<round(2.6)<<endl; //gives 3

    // pow 2^4
    int x,z;
    x=2,z=4;
    cout << pow(x,x)<<endl;
    cout << pow(x,z)<<endl;
    cout << pow(z,z)<<endl;
    cout << pow(z,x)<<endl;
    cout << pow(2,3)<<endl;

    //ceil & floor
    cout << ceil(2.1)<<endl; // gives 3 
    cout << floor (2.9)<<endl; //gives 2
    cout << ceil(-2.1)<<endl; // gives -2
    cout << floor(-2.9)<<endl; // gives -3
    //abslute
    cout<< abs(-10)<<endl;//gives 10 
    cout<< abs(10)<<endl;//gives 10

    //traning &quiez
    //Rectangle area Through Diagonal and Side Area
    // area = a.sqrt(pow(d,2)-pow(a,2))
    float a,d;
    cout <<"pleas enter area side  "<<endl;
    cin>>a;
    cout <<"pleas enter diagnol value "<<endl;
    cin>>d;
    float area; 
    area = a*sqrt((pow(d,2))-(pow(a,2)));
    return 0 ;
}