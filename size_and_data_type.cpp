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
    float c=48.78;
    //size of float
    
    cout<<sizeof(float)<<endl;//4
    //double Precision Floating-point type (double)
   double d=98.76;
   double e=78.567867;
    //size of double
    
    cout<<sizeof(double)<<endl;//8

    //void /null data type
    //void ;
    //size of void
    //cout<<sizeof(void)<<endl; //nill
    
    //wide character type (wchar_t)
    wchar_t f='ram';
    //size of wchar_t
    
    cout<<sizeof(wchar_t)<<endl;//2

//example 2
int n1,n2,sum;
cout<<"Enter two numbers"<<endl;
cin>>n1>>n2;
//sum of two numbers is stored in vriable sum
sum =n1+n2;
//print sum
cout<<"Sum of two numbers is "<<sum<<endl;





    //return
    return 0;
}