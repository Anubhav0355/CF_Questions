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

    int arr[100000] = {0};

    int num;
    fo(i,n) {
        cin>>num;
        arr[num-1]++;
    }

    int preSum[100000] = {0};
    preSum[0] = arr[0];

    for(int i=1; i<100000; i++) {
        preSum[i] = arr[i] + preSum[i-1];
    }

    int q;
    cin>>q;

    while(q--) {
        int m;
        cin>>m;

        if(m >= 100000) {
            cout<<preSum[100000-1]<<"\n";
        }
        else {
            cout<<preSum[m-1]<<"\n";
        }

    }

    return 0;
}