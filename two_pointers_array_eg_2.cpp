//2nd example of two_poiters_array
#include<iostream>
#include<vector>
using namespace std;
//sort an array consisting of only 0s & 1s
void sortZeroAndOne(vector<int>&v)
{
    int zero_count =0;
    for (int ele:v)
    {
        if(ele==0){
            zero_count++;
        }
        /* code */
    }
    for(int i=0;i<v.size();i++){
        if(i<zero_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortZeroAndOne(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}