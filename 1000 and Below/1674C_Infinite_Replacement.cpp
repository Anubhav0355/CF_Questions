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
        string s,t;
        cin>>s>>t;

        int a=0;
        for(auto x : t) {
            if(x=='a') a++;
        }

        if(t == "a") {
            cout<<1<<"\n";
        }
        else if(a > 0) {
            cout<<-1<<"\n";
        }
        else {
            cout<<(1ll<<(s.length()))<<"\n";
        }

    }

    return 0;
}