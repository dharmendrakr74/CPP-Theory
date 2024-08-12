#include<iostream>
using namespace std;
int main()
{
    int array[]={3,5,8,14,11,75};
    int max=array[0];
    for(int i=0;i<6;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            //break;
        }
    }
    cout<<max<<endl;
    return 0;
}