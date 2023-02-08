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

        string str;
        cin>>str;

        int x=0,y=0;
        bool isPossible = false;

        for(int i=0; i<str.size(); i++) {
            if(str[i] == 'L') {
                x--;
            }
            else if(str[i] == 'R') {
                x++;
            }
            else if(str[i] == 'U') {
                y++;
            }
            else {
                y--;
            }

            if(x==1 && y==1) {
                isPossible = true;
                break;
            }

        }

        if(isPossible) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

    }

    return 0;
}