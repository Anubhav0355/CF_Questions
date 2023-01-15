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

    int multiple = 0;

    if(n==0) {
        cout<<-1<<'\n';
        return 0;
    }

    if(n < m) {
        cout<<-1;
    }
    else if(n == m) {
        cout<<n<<'\n';
    }
    else {
        if(n%2 == 0) {
            if((n/2)%m == 0) {
                cout<<n/2;
            }
            else {
                multiple = n/2 + m - 1;
                multiple -= (multiple%m);
                cout<<multiple;
            }
        }
        else {
            if((n/2 + 1)%m == 0) {
                cout<<n/2 + 1;
            }
            else {
                multiple = n/2 + 1 + m - 1;
                multiple -= (multiple%m);
                cout<<multiple;
            }
        }
    }

    return 0;
}