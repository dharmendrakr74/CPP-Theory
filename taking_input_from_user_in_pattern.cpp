#include<iostream>
using namespace std;
int main(){
    //variable declaration
    //n:stores the user-inputted number of rows
    //i:loop counter for the outer loop (rows)
    //j: loop counter for the inner loop (columns)
    int n, i, j;
    //print Enter numbers
    cout<<"Enter numbers";
    //input through user
    cin >> n;
    //nested loop for rows
    for (i = 1; i <= n; i++)
    //loop i iterates from 1 to n controlling the number of rows

    {
        //nested loop for columns  iterates from 1 to the current value of i, controlling the number of columns in each row.
        for (j = 1; j <= i; j++)
        //loop j 
        {
            //print the value of j
            cout << j << " ";
            }
            //for end line
            cout << endl;
    }
// output of n8
//1
//1 2
//1 2 3
//1 2 3 4 
//1 2 3 4 5
//1 2 3 4 5 6
//1 2 3 4 5 6 7 
//1 2 3 4 5 6 7 8


}