#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// writ a program to check number in range
int ReadAge (){
    cout <<"pleas enter your age betwen 18 & 45 " <<endl;
    int age ;
    cin>>age;
    return age ;
}
bool ValidatNumberInRange (int num , int from , int to){
    return (num >= from && num <= to);
}
int ReadUntiAgeBtwen (int f , int t ){
    int age =0;
    do {
        age = ReadAge();
    }
    while ( ! ValidatNumberInRange(age , f ,t));
    return age ;

}
void PrintResult (int age){
    cout <<"your age is = " <<age<<endl;
}
int main (){
    PrintResult(ReadUntiAgeBtwen(18,45));

    return 0 ;
}