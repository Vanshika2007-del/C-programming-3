#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[100];

    cout << "Enter main string: ";
    cin.getline(str, 100);
    cout << "Enter search string: ";
    cin.getline(sub, 100);

    if(strstr(str, sub) != NULL)
        cout << "String is present";
    else
        cout << "String is not present";

    return 0;
}
