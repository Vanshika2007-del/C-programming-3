#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int count = 0;

    cout << "Enter sentence: ";
    cin.getline(str, 100);

    for(int i = 0; i < strlen(str); i++) {
        if(!isspace((unsigned char)str[i]) &&
           (i == 0 || isspace((unsigned char)str[i-1])))
            count++;
    }

    cout << "Words: " << count;
    return 0;
}
