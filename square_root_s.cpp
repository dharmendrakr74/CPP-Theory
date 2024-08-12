#include<iostream>
#include<cmath>
#include "square_root_s.h"
using namespace std;
/*
 * Calculates the cube, square, square root, cube root, and power of a given number.
 * This program takes a number as input from the user and calculates its cube,
 * square, square root, cube root, and power.
*/
int main()
{
    double n,p;
    cout<<"Enter which Number's Cube do you need :  ";
    cin>>n;

    cout<<"Entered Number (n) is :  ";
    cout<<n<<endl;
    cout<<"Your Cube  is:  ";
    cout<<n*n*n<<endl;

    cout<<"Entered Number (n) is :  ";
    cout<<n<<endl;
    cout<<"Your square  is:  ";
    cout<<n*n<<endl;

   cout<<"Your square root"<< " is:  "<<sqrt(n)<<endl;

   cout<<"Your cube root"<< " is:  "<<cbrt(n)<<endl;

   cout<<"Enter power of num. do you need :  ";

   cin>>p;

   cout<<"power of "<<n<< " is:  "<< pow(n,p)<<endl;

    return 0;

}