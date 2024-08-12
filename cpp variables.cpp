#include<iostream>
using namespace std;
int main(){
    // && operator
    int p=15,q=10,r=5;
    cout<<((p > q)&&(p > r))<<endl; // true
    cout<<((p > q)&&(p < r))<<endl; // false
    // || operator
    cout<<((r < q)||(p < q))<<endl; // true
    cout<<((p > q)||(q > r))<<endl; // true
    cout<<((p < q)||(p < r))<<endl; // false
    // ! operator
    cout<<(!(p == q))<<endl; // true
    cout<<(!(p > q))<<endl; // false
 }

Division Veriable
#include<iostream>
using namespace std;
int main(){
    int num1 = 26.0;
    int num2 = 8.0;
    int div = num1/num2;
    cout<<div<<endl;
    return 0;
}

Sum vriable
#include <iostream>
using namespace std;
int main()
{
    int num1=2;
    int num2=5;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
}

Hello World

#include<iostream>
using namespace std;
int main()

{
    cout<<"hello world"<<endl;
    cout<<"Dharmendra"<<endl;
    cout<<"rana";
}

dividing 2 int

#include<iostream> 
using namespace std;
int main()
{ 
 float num1=26.5;
 int num2=8;
 cout<<num2/num1;
 return 0;
}

Logical Operator
#include<iostream>
using namespace std;
int main(){
    // && operator
    int p=15,q=10,r=5;
    cout<<((p > q)&&(p > r))<<endl; // true
    cout<<((p > q)&&(p < r))<<endl; // false
    // || operator
    cout<<((r < q)||(p < q))<<endl; // true
    cout<<((p > q)||(q > r))<<endl; // true
    cout<<((p < q)||(p < r))<<endl; // false
    // ! operator
    cout<<(!(p == q))<<endl; // true
    cout<<(!(p > q))<<endl; // false
 }

Relational operator

#include<iostream>
 using namespace std;
 int main()
{
// create variables
int p = 10, q = 15; 
// == operator
cout<<(p == q)<<endl; // false
// != operator
cout<<(p != q)<<endl; // true
// > operator
cout<<(p > q)<<endl; // false
// < operator
cout<<(p < q)<<endl; // true
// >= operator
cout<<(p >= q)<<endl; // false
// <= operator
cout<<(p <= q)<<endl; // true 
}

user input
#include<iostream>
using namespace std;
int main() {
 int n1, n2, sum;
 cout << "Enter two numbers: ";
 cin >> n1 >> n2;
 // sum of two numbers is stored in variable sum
 sum = n1 + n2;
// prints sum 
 cout << sum <<endl;
 return 0;
}



