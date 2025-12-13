#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, j, k;
        cin >> n>>j>>k;
        string x = to_string(n);
        n = x.size();
        set<string> v;
        do{
            v.insert(x);
        }while (next_permutation(x.begin(), x.end()));

        vector<string> v2(v.begin(), v.end());
        int x1 = 0;
        int x2 = 0;
        for (char c: v2[j-1])
        {
            x1 = x1*10 + (c-'0');
        }
        for (char c: v2[k-1])
        {
            x2 = x2*10 + (c-'0');
        }
        
        int a = 0;
        int b = 0;
        while (x1>=1)
        {
            if (x1%10==x2%10)
            {
                a++;
            }
            x1/=10; x2/=10;
            
        }
        b = n-a;
        cout<< a<<"A"<<b<<"B"<<endl;
        
        
        
        
        
        
    }
}
