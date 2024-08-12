 #include<iostream>
 #include<vector>
 using namespace std;
 /**
 * @brief Calculates the running sum of a given vector of integers.
 *
 * This function takes a vector of integers as input and modifies it in-place
 * to contain the running sum of the original elements.
 *
 * @param v The input vector of integers.
 *
 * @example
 * Input:  [1, 2, 3, 4, 5]
 * Output: [1, 3, 6, 10, 15]
 */
void runningSum(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]+=v[i-1];
    }
}
/**
 * @brief Main function to test the runningSum function.
 *
 * This function prompts the user to enter the number of elements and the elements
 * themselves, and then calls the runningSum function to calculate the running sum.
 */
int main(){
     int n;
    cout<<"Enter No. of arrays";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cout<<"Enter Elements";
        cin >> ele;
        v.push_back(ele);
    }
    runningSum(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}