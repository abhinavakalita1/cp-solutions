#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x;
        cin >> n;
        multiset<long long> odd_ms;
        multiset<long long> even_ms;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x & 1) odd_ms.insert(x);
            else even_ms.insert(x);
        }

        if (odd_ms.empty()) {
            for (int i = 0; i < n; ++i) cout << 0 << " ";
            cout << '\n';
            continue;
        }
        if (even_ms.empty()) {
            long long foo = *odd_ms.rbegin();
            for (int i = 0; i < static_cast<int>(odd_ms.size()); ++i) {
                cout << (foo * !(i & 1)) << (i + 1 == (int)odd_ms.size() ? "" : " ");
            }
            cout << '\n';
            continue;
        }
        vector<long long> odd(odd_ms.begin(), odd_ms.end());
        vector<long long> even(even_ms.begin(), even_ms.end());

        long long foo = odd.empty() ? 0 : odd.back();
        cout << foo << " ";
        
        for (int i = (int)even.size() - 1; i >= 0; --i) {
            foo += even[i];
            cout << foo << " ";
        }

        int size = (int)odd.size();
        if (size == 1) {
            
        } else if (size == 2) {
            cout << 0;
        } else {
            int i=0;
            if ((size-1) %2==0)
            {
                for (i = 0; i < size - 1; ++i) {
                    cout<< foo - *(even.begin()) * !(i&1)<<" "; 
                }
            }
            else{
                for (i = 0; i < size - 2; ++i) {
                    cout<< foo - *(even.begin()) * !(i&1)<<" "; 
                }
                cout<<0;

            }
            
            
        }

        cout << '\n';
    }

    return 0;
}
