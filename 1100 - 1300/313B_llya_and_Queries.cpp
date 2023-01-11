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
    
    string str;
    cin>>str;

    int sumArray[str.size()];
    int preSumArray[str.size()];

    fo(i,str.size()-1) {
        if(str[i] == str[i+1]) {
            sumArray[i] = 1;
        }
        else {
            sumArray[i] = 0;
        }
    }

    preSumArray[0] = 0;

    for(int i=1; i<str.size(); i++) {
        preSumArray[i] = preSumArray[i-1] + sumArray[i-1];
    }

    int q;
    cin>>q;

    while(q--) {
        int l,r;
        cin>>l>>r;

        l--;
        r--;

        if(l==0) {
            cout<<preSumArray[r]<<"\n";
        }
        else if(l==r) {
            cout<<0<<"\n";
        }
        else {
            cout<<preSumArray[r] - preSumArray[l]<<"\n";
        }

    }

    return 0;
}