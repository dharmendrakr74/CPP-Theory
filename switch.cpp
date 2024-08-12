//switch
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Alphabet ";
    char letter;
    cin>>letter;
    switch(letter)
    {
        case 'a':
        cout<<("Vowel");
        break;
        case 'e':
        cout<<("Vowel");
        break;
        case 'i':
        cout<<("Vowel");
        break;
        case 'o':
        cout<<("Vowel");
        break;
        case 'u':
        cout<<("Vowel");
        break;
        case '1':
        cout<<("num");
        break;
        default:
        cout<<"Consonent";
    }
}