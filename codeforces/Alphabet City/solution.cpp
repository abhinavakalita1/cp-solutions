#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    string s2 = "";

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s2 += v[i];
    }

    vector<int> total(26, 0);
    for (char c : s2) {
        total[c - 'A']++;
    }

    for (int i = 0; i < n; i++) {

        vector<int> have = total;
        vector<int> need(26, 0);

        for (char c : v[i]) {
            have[c - 'A']--;
            need[c - 'A']++;

        }

        int max_mul = 0;
        bool impossible = false;

        for (int j = 0; j < 26; j++) {
            if (need[j] > 0) {
                if (have[j] <= 0) {
                    impossible = true;
                    break;
                }
                max_mul = max(
                    max_mul,
                    (need[j] + have[j] - 1) / have[j]
                );
            }
        }

        if (!impossible and (m-max_mul)>=0) {
            cout << m - max_mul << " ";
        }
        else{
            cout << -1 << " ";
        }
    }

    cout << "\n";
}
