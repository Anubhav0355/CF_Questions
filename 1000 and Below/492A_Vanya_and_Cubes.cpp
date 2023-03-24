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

    int arr[1000] = {0};
    int pre[1000] = {0};

    for(int i=1; i<1000; i++) {
        arr[i] = arr[i-1] + i;
        pre[i] = pre[i-1] + arr[i];
    }

    for(int i=1; i<1000; i++) {
        if(pre[i] > n) {
            cout<<i-1;
            break;
        }
    }


    return 0;
}