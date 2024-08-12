#include<iostream>
using namespace std;
int main()
{
    int n,m,p,q;
    cout<<"Enter which table do you need :  ";
    cin>>n>>m>>p>>q;
    for(int i=1; i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        cout<<m<<"*"<<i<<"="<<m*i<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        cout<<p<<"*"<<i<<"="<<p*i<<endl;
    }
     for(int i=1;i<=10;i++)
    {
        cout<<q<<"*"<<i<<"="<<q*i<<endl;
    }
    return 0;
}