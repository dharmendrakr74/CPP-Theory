#include<iostream>
#include<vector>
using namespace std;
//define a function
void sortZeroesAndOne(vector<int>&v)
{
    //declare integer
    int zeros_count=0;
    //for loop for count zero
    for(int ele:v)
    {
        if(ele==0){
            zeros_count++;
        }
    }
    //replace to 0
    for(int i=0; i<v.size();i++)
    {
        if(i<zeros_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
//main function
int main()
{
    //int declaration
    int n;
    //input
    cout<<"Enter Number of array";
    cin>>n;
    //inserting vectors
    vector<int>v;
    //for loop for inserting element
    for(int i=0; i<n;i++)
    {
        //int declaration
        int ele;
        //input
        cout<<"Enter Elements";
        cin>>ele;
        //vector add
        v.push_back(ele);
        
    }
    //call a function
    sortZeroesAndOne(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    //return
    return 0;
}