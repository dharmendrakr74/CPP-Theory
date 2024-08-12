// even odd using if else ststement
//header
#include<iostream>
//scope
using namespace std;
//function declaration
int main(){
    //variable declaration
    int num1,num2;
    //input
    cout<<"Enter first number: ";
    cin>>num1;
    
    //if statement
    if(num1%2==0){
        cout<<"Number 1 is Even :  ";
        cout<<endl;
    }
    else{
        cout<<"Number1 is Odd :  ";
        cout<<endl;
    }
    //input
    cout<<"Enter second number: ";
    cin>>num2;
    //if statement
    if(num2%2==0){
        cout<<"Number 2 is Even :  ";
        cout<<endl;
    }
    else{
        cout<<"Number2 is Odd :  ";
        cout<<endl;
    }
return 0;
}