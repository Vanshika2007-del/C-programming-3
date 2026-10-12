#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[6];

    cout << "Enter string: ";
    cin.getline(str1, 100);

    strncpy(str2, str1, 5);
    str2[5] = '\0';

    cout << "Copied: " << str2;
    return 0;
}
