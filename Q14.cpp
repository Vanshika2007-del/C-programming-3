#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[100];

    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Enter substring: ";
    cin.getline(sub, 100);

    char *p = strstr(str, sub);

    if(p != NULL)
        cout << "Found at position: " << p-str+1;
    else
        cout << "Substring not found";

    return 0;
}
