#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//rectangle area= a*sqrt(pow(d,2)-pow(a,2))

float rectanglearea(float a, float d){
    float area = a*( sqrt( pow(d,2) - pow(a,2) ) );
    return area;
} 
int main(){
    float a,b;
    cout<<"pleas enter length of a "<<endl;
    cin>>a;
    cout<<"pleas enter length of b "<<endl;
    cin>>b;
    cout<<rectanglearea(a,b)<<endl;
}