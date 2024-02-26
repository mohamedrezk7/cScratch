#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){

    int grade[3];
    cout<<"please enter grad1 "<<endl;
    cin>>grade[0];
    cout<<"please enter grad2 "<<endl;
    cin>>grade[1];
    cout<<"please enter grad3 "<<endl;
    cin>>grade[2];
    cout << "the average = "<< (grade[0]+grade[1]+grade[2]) / 3 <<endl;
};