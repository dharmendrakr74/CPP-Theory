#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/**
 * @file prefix_sum.cpp
 * @brief Implementation of prefix sum algorithm for range sum queries.
 *
 * This program takes an array of integers as input and calculates the prefix sum array.
 * It then takes queries in the form of a range (prefix, suffix) and returns the sum of elements in that range.
 *
 * @example
 * Input:
 *   Enter no. of array: 5
 *   Enter vector: 1
 *   Enter vector: 2
 *   Enter vector: 3
 *   Enter vector: 4
 *   Enter vector: 5
 *   Enter Quories: 2
 *   Enter prefix(l) and suffix(r): 2 4
 *   Enter prefix(l) and suffix(r): 1 3
 * Output:
 *   9
 *   6
 */

/**
 * @brief Calculates the prefix sum array and answers range sum queries.
 *
 * @param n Number of elements in the input array.
 * @param v Input array of integers.
 * @param q Number of queries.
 */
int main()
{
    int n;
    cout<<"Enter no. of array";
    cin>>n;
    // Create a vector of size n+1 with all elements initialized to 0.
    vector<int>v(n+1,0);
    // Read input array elements.
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter vector:  ";
        cin>>v[i];
    }
    // Calculate prefix sum array.
    for(int i=1;i<=n;i++)
    {
        //prefix=v[i] , suffix=v[i-1]
        v[i]+=v[i-1];

    }
    //q is quaries
    // Read number of queries.
    int q;
    cout<<"Enter Quories";
    cin>>q;
    // Answer queries.
    while(q--)
    {
        int l,r;
        //l is prefix; r is suffix
        cout<<"Enter prefix(l) and suffix(r) : ";
        cin>>l>>r;
        // Calculate sum of elements in the range [l, r].
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;

    }
}