 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 vector<int> sortedSquares(vector<int> &a){
    //int n = a.size();
    int i = 0;
    int j = a.size() - 1;
    vector<int> ans(a);
    while(i<=j){
        if(a[i]<a[j]){
            ans.push_back(a[j]*a[j]);
            j--;
        }
        else{
            ans.push_back(a[i]*a[i]);
            i++;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i=0;i<ans.size();i++);{
        cout<<ans[i]<<"";
    }
    //cout<<endl;
    return ans;
}
int main() {
    int n;
    cout<<"Enter No. of arrays";
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int ele;
        cout<<"Enter Elements";
        cin >> ele;
        a.push_back(ele);
    }
    sortedSquares(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}