#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; 
    v={10,20,30,40,50};
    cout<<v.size()<<endl;//5
    v.push_back(1);
    v.push_back(2);
    cout<<v.size()<<endl;//7
    v.resize(10);

}