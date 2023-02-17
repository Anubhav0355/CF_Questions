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
        cin>>n;

        if(n <= 1399) {
            cout<<"Division 4";
        }
        else if(n >= 1400 && n <= 1599) {
            cout<<"Division 3";
        }
        else if(n >= 1600 && n <= 1899) {
            cout<<"Division 2";
        }
        else {
            cout<<"Division 1";
        }

        cout<<"\n";

    }

    return 0;
}