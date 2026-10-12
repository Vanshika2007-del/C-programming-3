#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if(n1 != n2) {
        cout << "Not Anagrams";
        return 0;
    }

    sort(str1, str1+n1);
    sort(str2, str2+n2);

    if(strcmp(str1, str2) == 0)
        cout << "Anagrams";
    else
        cout << "Not Anagrams";

    return 0;
}
