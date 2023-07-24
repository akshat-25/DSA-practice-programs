#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{
    // Base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main(int argc, char const *argv[])
{
    string str = "abbac";
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome)
    {
        cout << "It is a palindrome";
    }

    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}