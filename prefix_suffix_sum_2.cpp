 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 /**
 * Checks if there exists a prefix and suffix in the given vector such that their sum is equal.
 *
 * @param v The input vector of integers.
 * @return True if a prefix and suffix with equal sum exist, False otherwise.
 *
 * Example:
 *   Input: [1, 2, 3, 4, 5]
 *   Output: True (Prefix: [1, 2], Suffix: [4, 5])
 */
bool checkPrefixSuffixSum(vector<int>&v)
{
    int total_sum=0;
    for(int i=0;i<v.size();i++)
    {
        total_sum +=v[i];

    }
    int prefix_sum=0;
    for(int i=0; i<v.size();i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(suffix_sum==prefix_sum)
        {
            return true;

        }
    }
    return false;
}
int main()
{
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
    cout<<checkPrefixSuffixSum(v)<<endl;
}