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
    
    int y,w;
    cin>>y>>w;

    int m = max(y,w);

    int ans = 6-m + 1;

    if(ans == 2) {
        cout<<"1/3";
    }
    else if(ans == 3) {
        cout<<"1/2";
    }
    else if(ans == 4) {
        cout<<"2/3";
    }
    else if(ans == 6) {
        cout<<"1";
    }
    else {
        cout<<ans<<"/"<<"6";
    }

    return 0;
}