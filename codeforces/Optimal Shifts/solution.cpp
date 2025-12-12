#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        int first = 1;
        int flag;
        int cnt=0;
        char foo;
        vector<int> cntrs;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (i==n-1)
            {
                foo=c;
            }
            
            if (first==1)
            {
                if (c=='1')
                {
                    first=0;
                }
                else{
                    first=2;
                }
                
            }
            
            if (c=='0')
            {
                flag=1;
            }
            else{
                flag=0;
                if (cnt!=0)
                {
                    cntrs.push_back(cnt);
                }
                cnt=0;
                
            }
            if (flag==1)
            {
                cnt++;
            }
            
                        
            
        }
        if (cnt!=0)
        {
            cntrs.push_back(cnt);
        }
        
        if (!cntrs.empty() && foo == '0' && first == 2) {
            cntrs[0] = cntrs[0] + cntrs.back();
        }
        if (cntrs.empty()) {
            cout << 0 << endl;
        } else {
            cout << *max_element(cntrs.begin(), cntrs.end()) << endl;
        }

        

        
        
    }
}
