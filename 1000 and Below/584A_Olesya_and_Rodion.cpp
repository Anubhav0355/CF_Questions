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
    
    int n,t;
    cin>>n>>t;

    if(n==1 && t == 10) {
        cout<<-1;
        return 0;
    }

    if(t==10) {
        t = 1;
    }

    cout<<t;
    for(int i=1; i<n; i++) {
        cout<<0;
    }

    return 0;

    return 0;
}