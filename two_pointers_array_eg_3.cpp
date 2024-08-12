 #include<iostream>
 #include<vector>
 using namespace std;
void sortZeroesAndOne(vector<int> &a){
    int n = a.size();
    int i = 0;
    int j = n - 1;
    while(i<j){
        if(a[i]==1 && a[j]==0){
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }if(a[i]==0){
            i++;
        }
        if(a[j]==1){
            j--;
        }
    }
    return;
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
    sortZeroesAndOne(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}