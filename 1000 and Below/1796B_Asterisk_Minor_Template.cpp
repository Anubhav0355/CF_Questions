#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--) {
        string a,b;
        cin>>a>>b;

        if(a[0] == b[0]) {
            cout<<"YES\n";
            cout<<a[0]<<"*\n";
            continue;
        }
        else if(a[a.length()-1] == b[b.length()-1]) {
            cout<<"YES\n";
            cout<<"*"<<a[a.length()-1]<<"\n";
            continue;
        }
        
        bool isPossible = false;
        string temp;

        for(int i=0; i<a.length()-1; i++) {
            if(b.find(a.substr(i,2)) != string::npos) {
                temp = a.substr(i,2);
                isPossible = true;
                break;
            }
        }

        if(isPossible) {
            cout<<"YES\n";
            cout<<"*"<<temp<<"*\n";
        }
        else {
            cout<<"NO\n";
        }

    }

    return 0;
}