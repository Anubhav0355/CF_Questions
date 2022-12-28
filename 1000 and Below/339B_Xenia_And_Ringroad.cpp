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

    int current,next;
    current = 1;

    ll minTime = 0;

    for(int i=1; i<=m; i++) {
        cin>>next;

        if(next - current > 0) {
            minTime += next - current;
            current = next;
        }
        else if(next - current == 0) {
            continue;
        }
        else {
            minTime += (n - current + next);
            current = next;
        }
    }

    cout<<minTime;

    return 0;
}