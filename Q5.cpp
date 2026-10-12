#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[200], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcat(str1, str2);
    cout << "Result: " << str1;
    return 0;
}
