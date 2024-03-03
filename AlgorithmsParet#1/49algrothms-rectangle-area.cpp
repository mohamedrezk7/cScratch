#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to calculate rectangle area 
void ReadInfo (float &l , float &w){
    cout <<"pleas enter rectangle length "<<endl;
    cin>>l;
    cout <<"pleas enter rectangle width "<<endl;
    cin>>w;
}
float  CaluculateRectangleArea (float l , float w ){
    float area = l*w;
    return area;
}
void PrintResult (float a ){
    cout << " teh rectangle area is = " <<a <<endl;
}
int main (){
    float x , y ; 
    ReadInfo(x , y);
    PrintResult(CaluculateRectangleArea(x, y));
}