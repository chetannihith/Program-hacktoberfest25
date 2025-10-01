#include <bits/stdc++.h>
using namespace std;

/*
    Program: Pangram Checker
    Description:
    This program checks whether a given sentence is a pangram or not.
    A pangram is a sentence that contains every letter of the English alphabet at least once.

    Example:
    Input: "The quick brown fox jumps over a lazy dog"
    Output: Yes, it's a pangram!
*/

bool isPangram(string s) {
    vector<bool> mark(26, false);
    int index;

    // Traverse every character
    for (char c : s) {
        if ('A' <= c && c <= 'Z')
            index = c - 'A';
        else if ('a' <= c && c <= 'z')
            index = c - 'a';
        else
            continue; // ignore non-alphabet characters
        mark[index] = true;
    }

    // Check if all letters are present
    for (bool present : mark) {
        if (!present) return false;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    if (isPangram(input))
        cout << "✅ Yes, it's a pangram!" << endl;
    else
        cout << "❌ No, it's not a pangram!" << endl;

    return 0;
}
