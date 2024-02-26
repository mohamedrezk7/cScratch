#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum en_color {RED=1 ,BLUE=2 ,GREEN=3 ,YELLOW=4 };

int main(){

    cout<<"*******************"<<endl;
    cout<<"(1)RED"<<endl;
    cout<<"(2)BLUE"<<endl;
    cout<<"(3)GREEN"<<endl;
    cout<<"(4)YELLOW"<<endl;
    cout<<"*******************"<<endl;
    int x;
    en_color color;
    cin>>x;
    color = (en_color)x;

    if(color=en_color::RED){
        system("color 4F");
    }
    else if(color=en_color::BLUE){
        system("color 1F");
    }
    else if(color=en_color::GREEN){
        system("color 2F");
    }
    else if (color=en_color::YELLOW){
        system("color 6F");
    }
    return 0;

};