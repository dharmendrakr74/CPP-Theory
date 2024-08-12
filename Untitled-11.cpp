//even or odd
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number ";
    cin>>num;
    if(num%2==1)
    {
        cout<<"Value Entered is odd"<<endl;
    }
    else
    {
        cout<<"Value Entered is Even"<<endl;
    }
    if(num%2==1 ?cout<<"Entered Value Is Odd":cout<<"Entered Value is Even");
}