#include <bits/stdc++.h>
using namespace std;

// Function to compute the prefix function (LPS array)
vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

// Function to perform KMP algorithm
vector<int> kmp_search(string text, string pattern) {
    vector<int> result; // To store indices of pattern matches
    string combined = pattern + "#" + text; // Combine pattern and text with a separator
    vector<int> pi = prefix_function(combined);
    
    int pattern_length = pattern.size();
    for (int i = pattern_length + 1; i < pi.size(); i++) {
        if (pi[i] == pattern_length) {
            result.push_back(i - 2 * pattern_length); // Store the starting index
        }
    }
    return result;
}

int main() {
    string text = "ababcabcababc";
    string pattern = "abc";

    vector<int> matches = kmp_search(text, pattern);
    cout << "Pattern found at indices: ";
    for (int index : matches) {
        cout << index << " ";
    }
    return 0;
}
