#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//rectangle area
float rectanglearea(float x, float y){
    float area = x*y;
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