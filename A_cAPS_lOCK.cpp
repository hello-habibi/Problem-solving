#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool isChangable = true;  
    int n = s.size();

    string result;
    
    result += toupper(s[0]);

 
    for (int i = 1; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result += tolower(s[i]);
        } else {
            isChangable = false;
            break;
        }
    }

    if (isChangable) {
        cout << result << endl;
    } else {
        cout << s << endl;
    }

    return 0;
}
