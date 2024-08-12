#include <iostream>

#include<vector>

using namespace std;

int max_1s(vector<vector<int>>matrix)

{

 int max = 0; // maximum number of 1's

 int max_row = 0; // index of the row having the maximum number of 1's

 for (int i = 0; i < matrix.size(); i++)

 {

 int count = 0; // number of 1's in current row

 for (int j = 0; j < matrix[0].size(); j++)

 {

 if (matrix[i][j] == 1)

 count++;

 }

 if (count > max)

 { max = count;

 max_row = i;

 }

 }

 return max_row;

}

int main()

{ int n,m;

 cout<<"enter the number of rows you want : ";

 cin>>n;

 cout<<"enter the number of columns you want : ";

 cin>>m;

 vector<vector<int>> matrix(n,vector<int>(m));

 cout<<"enter the elements of the matrix : ";

 for(int i=0;i<n;i++){

 for(int j=0;j<m;j++){

 cin>>matrix[i][j];

 }

 }

 int max = max_1s(matrix);

 cout << "The row with maximum ones is : "<<max;

 return 0;

}