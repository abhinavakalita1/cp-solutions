#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        char c;
        int flag = 0;
        int revk = k;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c=='1')
            {
                flag=1;
                revk = k;
                cnt++;
            }
            else if (flag==1 and revk!=0)
            {
                cnt++;
                revk--;
            }
            else{
                flag = 0;
            } 
        }
        cout << n-cnt<<endl;
        

        
    }
}
