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
    
    ll n,m;
    cin>>n>>m;

    if(n==m) {
        cout<<0;
        return 0;
    }

    if(m%n != 0) {
        cout<<-1;
    }
    else {
        int div = m/n;
        int two = 0, three = 0;
        while(div%2 == 0 || div%3 == 0) {
            if(div%2 == 0) {
                two++;
                div /= 2;
            }
            else {
                three++;
                div /= 3;
            }
        }

        if(div == 1) {
            cout<<two+three;
        }
        else {
            cout<<-1;
        }

    }

    return 0;
}