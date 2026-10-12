#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    strcpy(rev, str);
    int n = strlen(rev);

    for(int i = 0; i < n/2; i++) {
        char temp = rev[i];
        rev[i] = rev[n-i-1];
        rev[n-i-1] = temp;
    }

    if(strcmp(str, rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
