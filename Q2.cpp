#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int count = 0;
    cout << "Enter string: ";
    cin.getline(str, 100);

    for(int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    cout << "Vowels: " << count;
    return 0;
}
