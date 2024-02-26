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
    float r_area; 
    r_area = a*sqrt(pow(d,2)-pow(a,2));
    cout<<"the rectangle area is = "<<r_area<<endl;

    //Circle Area
    //ceil
    float pi =3.14;
    float r , c_area;
    cout << "pleas enter the R "<<endl;
    cin>>r;
    c_area = (pi*(pow(r,2)));
    cout <<"the circle area is = "<<c_area<<endl;
    c_area = ceil(pi*(pow(r,2)));
    cout <<"the circle area is = "<<c_area<<endl;

    // Circle Area Through Diameter 
    //ceil
    float D ,D_area;
    cout << "pleas enter the D "<<endl;
    cin>>D;
    D_area=pi*(pow(D,2))/4;
    cout << "the circle area is = "<< D_area<<endl;
    D_area=ceil(pi*pow(D,2)/4);
    cout << "the circle area aftre ceil is = "<< D_area <<endl;
    
    // Circle Area Inscribed in a Square
    //ceil 
    float A ,A_area;
    cout << "pleas enter the A "<<endl;
    cin>>A;
    A_area= pi*pow((A/2),2);
    cout << "pleas circle area is = "<< A_area<<endl;

    //Circle Area Along the Circumference
    //ceil
    float l ,l_area;
    cout<< "pleas enter L"<<endl;
    cin>>l;
    l_area = pow(l,2)/4*pi;
    cout<<l_area<<endl;

    return 0 ;
}