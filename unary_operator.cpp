#include<iostream>
using namespace std;
int main()

{
    //Example...1

    int a=4;
    cout<<sizeof(a)<<endl; //4
    char name='a';
    cout<<sizeof(name)<<endl; //1
    bool flag;
    a==name ? flag = true : flag = false;
    cout<<flag<<endl; //0
    cout<<(&a)<<endl; // 0x61ff00
    int c=6;
    cout<<(c++)<<endl; //6
    int b=5;
    cout<<(--b)<<endl; //4

    
    return 0;

}