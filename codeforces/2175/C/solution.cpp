#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        set<int> ms;
        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            ms.insert(x);
        }

        vector<int> ans;
        bool ok = true;
        set<int> ps = ms;

        while (!ms.empty()) {
            int x = *ms.begin();

            int limit = k/x;

            for (int i = 1; i <= limit; i++) {
                int need = i * x;
                int flag = ps.count(need);
                if (!flag) {
                    ok = false;
                    break;
                }
            }

            if (!ok) break;

            for (int i = 1; i <= limit; i++) {
                auto it = ms.find(i*x);
                if (it != ms.end()) {
                    ms.erase(it);
                } else {
                }
            }

            ans.push_back(x);
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            ans.erase(unique(ans.begin(), ans.end()), ans.end());

            cout << ans.size() << "\n";
            for (int x : ans) cout << x << " ";
            cout << "\n";
        }
    }
}
