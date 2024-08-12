#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout <<"Enter rows: ";
    cin >> rows;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0){
        for(int s = 1; s <= rows-i; ++s)
        {
            cout <<" ";
        }
    while(k != 2*i-1)
    {
        cout << "*";
        ++k;
    }
    cout << endl;
    } 
    return 0;
}