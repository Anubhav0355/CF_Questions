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
        int n;
		string s;
		cin>>n>>s;
        int i;
		char mn=*min_element(all(s));
		for (i=n-1; i>=0; i--) {
            if(s[i]==mn) break;
        }
		cout<<s[i]+s.substr(0,i)+s.substr(i+1)<<'\n';
    }

    return 0;
}