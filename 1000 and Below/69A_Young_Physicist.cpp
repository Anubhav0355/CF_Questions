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
    
    int n;
    cin>>n;

    int x,y,z;
    cin>>x>>y>>z;

    n--;

    int x1,y1,z1;
    while(n--) {
        cin>>x1>>y1>>z1;
        x += x1;
        y += y1;
        z += z1;
    }

    if(abs(x) > 0 || abs(y) > 0 || abs(z) > 0) {
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }

    return 0;
}