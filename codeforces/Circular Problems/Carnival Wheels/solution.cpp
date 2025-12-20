#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
        set<int> s={a};
        a=(a+b)%l;

        while (s.count(a)==0)
        {
            
            s.insert(a);
            a=(a+b)%l;
        }
        
        s.insert(a);
        cout<< *(prev(s.end()))<<endl;
        
    }

}
