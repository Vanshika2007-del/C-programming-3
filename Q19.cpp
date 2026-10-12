#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[300] = "";
    char str2[100];
    int n;

    cout << "Enter number of words (1-3): ";
    cin >> n;

    if(n < 1 || n > 3) return 0;

    for(int i = 0; i < n; i++) {
        cout << "Enter word: ";
        cin >> str2;

        if(i > 0)
            strcat(str1, " ");

        strcat(str1, str2);
    }

    cout << "Sentence: " << str1;
    return 0;
}
