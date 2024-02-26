#include <iostream>
using namespace std;
int main(){
    string userName;
    int age ;
    string city , country;
    float MonthlySalary;
    float YearlySalary;
    char Gender;
    bool married;
    cout <<"pleas enter your name \n";
    cin>>userName;
    
    cout <<"enter your age \n";
    cin>>age;
    cout <<"pleas enter city "<<endl;
    cin>>city;
    cout <<"pleas enter country "<<endl;
    cin>>country;
    cout <<"pleas enter monthly salary  "<<endl;
    cin>>MonthlySalary;
    cout <<"pleas enter your gender "<<endl;
    cin>>Gender;
    cout <<"pleas enter true if you married else enter false "<<endl;
    cin>>married;
    cout <<"userName = " <<  userName <<endl;
    cout <<"age = " <<  age <<endl;
    cout <<"city = "<< city <<endl;
    cout << "country = " <<country <<endl;
    cout <<"MonthlySalary = " << MonthlySalary <<endl;
    cout <<"yearly salary = "<< MonthlySalary*12 <<endl;
    cout <<"gender = " << Gender <<endl;
    cout <<"married = " << married <<endl;
    return 0;
}