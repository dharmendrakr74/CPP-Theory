//header
#include<iostream>
//scope
using namespace std;
//function declaration

#include <iostream>

int main() {
    int x ;
    int y ;
    cout<<"Enter X And Y :  ";
    cin>>x>>y ;
    // Post-increment
    std::cout << "Post-increment: " << x++ << std::endl;
    std::cout << "Value of x after post-increment: " << x << std::endl;

    // Pre-increment
      // Reset x
    //std::cout use when scope is not pesent ie.using namespace std
    std::cout << "Pre-increment: " << ++x << std::endl;
    cout << "Value of x after pre-increment: " << x << std::endl;


    std::cout << "Post-increment: " << y++ << std::endl;
    std::cout << "Value of y after post-increment: " << y << std::endl;
    // Pre-increment
      // Reset x
    //std::cout use when scope is not pesent ie.using namespace std
    std::cout << "Pre-increment: " << ++y << std::endl;
    cout << "Value of y after pre-increment: " << y << std::endl;

    // Post-increment
    std::cout << "Post-increment: " << x-- << std::endl;
    std::cout << "Value of x after post-increment: " << x << std::endl;

    // Pre-increment
      // Reset x
    //std::cout use when scope is not pesent ie.using namespace std
    std::cout << "Pre-increment: " << --x << std::endl;
    cout << "Value of x after pre-increment: " << x << std::endl;


    std::cout << "Post-increment: " << y-- << std::endl;
    std::cout << "Value of y after post-increment: " << y << std::endl;
    // Pre-increment
      // Reset x
    //std::cout use when scope is not pesent ie.using namespace std
    std::cout << "Pre-increment: " << --y << std::endl;
    cout << "Value of y after pre-increment: " << y << std::endl;


    //example 2 for int
    int num1=26;
    int num2=6;
    int div=num1/num2;
    cout<<"Div Int : "<<div<<endl;
    
    //example 3 for float
    float num3=26.0;
    float num4=6.0;
    float div1=num3/num4;
    cout<<"Div Float : "<<div1<<endl;


    return 0;
}

