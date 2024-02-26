#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    // convert st1=43.22 to d f i
    string st1 = "43.2248";
    double d = stod(st1);
    cout<<d<<endl;
    float f = stof(st1);
    cout<<f<<endl;
    int i = stoi(st1);
    cout<<i<<endl;
    //conver itn n1 to string 
    int n1 = 1234778681;
    string s =to_string(n1);
    cout <<s<<endl;
    // convert double d2 to string
    double d1 = 22.777;
    string s1 = to_string(d1);
    cout<<s1<<endl;
    //convert float to string anf integer
    float f1 =55.77;
    string s2 = to_string(f1);
    cout<<s2<<endl;
    int i2 = f1;
    cout<<i2<<endl;
    i2=(int)f1;
    cout<<i2<<endl;
    i2=int (f1);
    cout<<i2<<endl;
};