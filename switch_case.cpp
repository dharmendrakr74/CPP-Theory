//header file
#include<iostream>
//scope 
using namespace std;
//main function
int main(){
    //variable declaration
    int day;
    //input statement for taking user input 
    cout<<"Enter a day of the week (1-7): "<<endl;
    //for second line input statement
    //user input(day)
    cin >> day;
    // switch statement 
    switch(day){
        //caes(input value) then :
        case 1:
        //output statement
        cout << " Day is Monday"<<endl;
        //break statement
        //when break statement is not given then output will be 
        //all after executed eg. case 2 execute then output will be
        //statement 2,statement 3, statement 4 ............end
        break;
        //case 2
        case 2:
        //output statement
        cout << " Day is Tuesday"<<endl;
        break;
        case 3:
        //output statement
        cout << " Day is Wednesday"<<endl;
        break;
        case 4:
        //output statement
        cout << " Day is Thursday"<<endl;
        break;
        case 5:
        //output statement
        cout << " Day is Friday"<<endl;
        break;
        case 6:
        //output statement
        cout << " Day is Saturday"<<endl;
        break;
        case 7:
        //output statement
        cout << " Day is Sunday"<<endl;
        break;
        default: 
        //output statement
        cout << "Invalid day"<<endl;
        break;

    }
    //for finding vowel
    //char(variable declare)
    char vowel;
    //input statement for taking user input
    cout << "Enter a vowel (a, e, i, o, u): "<<endl;
    //user input(vowel)
    cin >> vowel;
    //switch statement
    switch(vowel){
        //case(input value) then :
    
        case 'a':
        case 'A':
        //output statement
        cout<<"Entared Letter is Vowel "<<'a';
        cout<<endl;
        //break statement
        break;
        //2nd case
        case 'e':
        case 'E':
        //output statement
        cout<<"Entared Letter is Vowel "<<'e';
        cout<<endl;
        //break statement//
        break;
        //case 3
        case 'i':
        case 'I':
        //output statement//
        cout<<"Entared Letter is Vowel "<<'i';
        cout<<endl;
        break;
        //case 4
        case 'o':
        case 'O':
        //output statement
        cout<<"Entared Letter is Vowel "<<'o';
        cout<<endl;
        break;
        //case 5
        case 'u':
        case 'U':
        cout<<"Entared Letter is Vowel "<<'u';
        cout<<endl;
        break;
        //default statement 
        default:
        cout<<"Entared Letter is not Vowel and Letter is Consonent and may be"
        "others Character or number"<<endl;
        
    }
    return 0;
}