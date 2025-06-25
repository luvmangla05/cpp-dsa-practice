#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

int main() {
    string str = "madam";
    cout << (isPalindrome(str) ? "Yes" : "No");
    return 0;
}
