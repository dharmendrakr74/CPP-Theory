#include <iostream>
#include <string>
using namespace std;

int main() {
    string searchQuery;
    cout << "Enter your search query: ";
    getline(cin, searchQuery);
    cout << "You searched for: " << searchQuery << endl;
    return 0;
}