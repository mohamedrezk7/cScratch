#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    string s1 ,s2, s3;
    cout <<"pleas enter s1 string "<<endl;
    getline(cin , s1);
    cout<<s1<<endl; //Mohammed Abu-HadHoud

    cout <<"pleas enter s2 string "<<endl;
    cin>>s2;

    cout <<"pleas enter s3 string "<<endl;
    cin>>s3;

    cout << "the lenth of sring s1 is = "<<s1.length()<<endl; //20
    cout << s1[0]<<endl;
    cout << s1[2]<<endl;
    cout << s1[4]<<endl;
    cout << s1[7]<<endl;
    cout << s2+s3<<endl;
    cout <<(stoi(s2)+ stoi(s3))<<endl;

};