#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Enter character: ";
    cin >> ch;

    char *p = strchr(str, ch);

    if(p != NULL)
        cout << "Position: " << p-str+1;
    else
        cout << "Character not found";

    return 0;
}
