#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a programe to check mark if >50 pass .. <50 ->fail
enum enPass_Fail {pass=1 , fail=2 };
int ReadMark (){
    int mark ;
    cout<<"pleas enter your mark "<<endl;
    cin>>mark;
    return mark;
}
enPass_Fail CehckMArk (int mark){
    if(mark > 50){
        return enPass_Fail::pass;
    }
    else {
        return enPass_Fail::fail;
    }
}
void PrintResult (int mark){
    // if (CehckMArk(mark)== enPass_Fail::fail)
    // cout <<"you are -> fail "<<endl;
    // else 
    // cout <<"you are -> pass"<<endl;
    if (mark==enPass_Fail::fail) cout <<"you are -> fail "<<endl;
    else cout <<"you are -> fail "<<endl;
    
}
int main (){
    // PrintResult(ReadMark());
    PrintResult(CehckMArk(ReadMark()));
}