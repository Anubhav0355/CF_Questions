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
    
    int n,k;
    cin>>n>>k;

    int preSum[n];
    int num;

    cin>>num;
    preSum[0] = num;
    int temp = (n-1);

    for(int i=1; i<=temp; i++) {
        cin>>num;
        preSum[i] = num + preSum[i-1];
    }

    int minIndex = 1, min = preSum[k-1];

    int j=0;
    for(int i=k; i<n; i++) {
        if((preSum[i] - preSum[j]) < min) {
            min = preSum[i] - preSum[j];
            minIndex = j+2;
        }
        j++;
    }

    cout<<minIndex;

    return 0;
}