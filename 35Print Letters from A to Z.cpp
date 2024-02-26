#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//Print Letters from A to Z
void Print_Letters_From_A_to_Z (){
    int ch=90 , i=65;
    while (i<=ch){
        cout<<char(i)<<endl;
        i++;
    }
}
int main (){
    Print_Letters_From_A_to_Z();
}