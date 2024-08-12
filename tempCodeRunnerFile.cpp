#include<iostream>
using namespace std;
int main()
{
    //charater data type (char)
    char a='a';
    //size of char
    cout<<sizeof(char)<<endl;//1
    //boolean type (bool)
    bool flag=false;
    //size of bool
    cout<<sizeof(bool)<<endl;//1
    //floating-Point data type (float)
    float a=48.78;
    //size of float
    
    cout<<sizeof(float)<<endl;//4
    //double Precision Floating-point type (double)
    double b=98.76;
    double a=78.567867;
    //size of double
    cout<<sizeof(double)<<endl;//8

    //void;
    //size of void
    cout<<sizeof(void)<<endl;//nill

    //wide character type (wchar_t)
    wchar_t b='ram';
    //size of wchar_t
    cout<<sizeof(wchar_t)<<endl;//4
    //return
    return 0;
}