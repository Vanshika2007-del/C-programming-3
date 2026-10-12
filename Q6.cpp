#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], last[100];

    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;

    strcat(first, " ");
    strcat(first, last);

    cout << "Full Name: " << first;
    return 0;
}
