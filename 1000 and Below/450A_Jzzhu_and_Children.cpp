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
    
    int n,m;
    cin>>n>>m;
    
    vector<int> v;
    fo(i,n) {
        int num;
        cin>>num;
        v.pb(num);
    }

    int max = -1;
    int index = 0;
    fo(i,v.size()) {
        int div = (v[i] + m - 1)/m;
        if(div >= max) {
            max = div;
            index = i+1;
        }
    }

    cout<<index;

    return 0;
}