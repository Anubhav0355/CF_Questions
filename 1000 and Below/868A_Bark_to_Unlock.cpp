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
    
    string password;
    cin>>password;

    bool isPossible = false;

    int n;
    cin>>n;

    vector<string> v;
    fo(i,n) {
        string temp; cin>>temp;
        if(temp == password) isPossible = true;
        v.pb(temp);
    }

    if(!isPossible) {
        fo(i,n) {
            for(int j=0; j<n; j++) {
                if(v[i][1] == password[0] && v[j][0] == password[1] || v[j][1] == password[0] && v[i][0] == password[1]) {
                    isPossible = true;
                    break;
                }
            }
            if(isPossible) {
                break;
            }
        }
    }

    if(isPossible) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }


    return 0;
}