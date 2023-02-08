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
    
    int n,a,b;
    cin>>n>>a>>b;
    vi front;
    vi back;

    for(int i=a; i<n; i++) {
        front.pb(i);
    }

    for(int i=b; i>=0; i--) {
        back.pb(i);
    }

    int count = 0;
    int i = front.size()-1,j = back.size()-1;

    while(true) {
        if(front[i--] + back[j--] == n-1) {
            count++;
        }
        else {
            break;
        }
    }

    cout<<count;

    return 0;
}