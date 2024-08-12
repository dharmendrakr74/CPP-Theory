//divisible 3& 5
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter num";
    cin>>num;
    if(num%3==0||num%5==0)
    {
        cout<<"matched"<<endl;
    }
    else{
        cout<<"Not Matched"<<endl;
    }
}