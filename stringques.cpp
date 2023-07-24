#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <sstream>

using namespace std;

int main()
{
    // Get the two strings
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Tokenize the strings into individual words
    unordered_set<string> words1, words2;
    stringstream ss1(str1), ss2(str2);
    string word;
    while (ss1 >> word)
    {
        words1.insert(word);
    }
    while (ss2 >> word)
    {
        words2.insert(word);
    }

    // Find the common words
    unordered_set<string> common;
    for (const string &word : words1)
    {
        if (words2.count(word))
        {
            common.insert(word);
        }
    }

    // Print the common words
    cout << "Common words: ";
    for (const string &word : common)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}