#include<iostream>
using namespace std;
int main(){
    //variable declaration
    int a=56, b=34, c=5;
    //using logical  and operator
    cout<<((a>b)&&(b>c))<<"  && potr"<<endl;
    cout<<((a<b)&&(b<c))<<"  && potr"<<endl;
    // using logical or operator
    cout<<((a>b)||(b>c))<<"  || potr"<<endl;
    cout<<((a<b)||(b<c))<<"  || potr"<<endl;
    cout<<((a>c)||(c>a))<<"  || potr"<<endl;
    // logical not(!)
    cout<<(!(a==b))<<"  ! logical not"<<endl;
    cout<<(!(a>b))<<"  ! logical not"<<endl;
}