#include<iostream>
using namespace std;
float sum(float p, float q)
//p&q are formal parameters
{
    return q+p;
}
int main(){
    float x=9,y=99.5;
    cout<<(sum(x,y))<<"sum"<<endl;
}