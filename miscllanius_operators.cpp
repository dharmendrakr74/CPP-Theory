#include<iostream>
using namespace std;
int main(){
    //(1) Size of
    int sz;
    //for size of int 
    cout<<sizeof(sz)<<endl;//4
    // size of float
    cout<<sizeof(float)<<endl;//4
    //size of char
    cout<<sizeof(char)<<endl;//1
    //size of double
    cout<<sizeof(double)<<endl;//8


    //example 2
 
    //variable  declaration
    int a=200,b=30,c;
    //largest among a & b
    //ternary operator
    c=(a>b)?a:b;
    //print the larg number
    cout<<"largest number is "<<c<<endl;

    //conditional operator
    if(a>b)
    {
        cout<<"a is largest  : "<<a<<endl;
    }
    else
    {
        cout<<"b is largest  : "<<b<<endl;
    }
    // comma operator 
    int x = 5, y = 10;
    int z = (x = x + 1, y = y + 2, x + y);
    cout << z << endl;  // Output: 18


}
