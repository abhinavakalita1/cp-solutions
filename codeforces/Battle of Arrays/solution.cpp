#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        multiset<int> a, b;
        int x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++) {
            cin >> x;
            b.insert(x);
        }

        while (!a.empty() && !b.empty()) {
            auto ita = prev(a.end());
            auto itb = prev(b.end());

            int va = *ita;
            int vb = *itb;

            b.erase(itb);
            if (vb > va) b.insert(vb - va);

            if (b.empty()) {
                cout<< "Alice"<<endl;
                break;
            }

            ita = prev(a.end());
            itb = prev(b.end());

            va = *ita;
            vb = *itb;

            a.erase(ita);
            if (va > vb) a.insert(va - vb);
            if (a.empty()) {
                cout<< "Bob"<<endl;
                break;
            }
        }
    }
}
