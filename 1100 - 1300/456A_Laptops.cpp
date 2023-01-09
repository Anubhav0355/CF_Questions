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

    int temp = n;

    bool isFound = false;
    vpii v;

    while(temp--) {
        int a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }

    sort(all(v));

    fo(i,n-1) {
        if(v[i].first < v[i+1].first) {
            if(v[i].second > v[i+1].second) {
                isFound = true;
                break;
            }
        }
    }

    if(isFound) {
        cout<<"Happy Alex\n";
    }
    else {
        cout<<"Poor Alex\n";
    }


    return 0;
}