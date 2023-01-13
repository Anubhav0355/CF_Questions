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

    int arr[n],arr2[n-1];
    int result = 0,result2 = 0;
    int num;

    fo(i,n) {
        cin>>arr[i];
        result = (result^arr[i]);
    }

    fo(i,n-1) {
        cin>>arr2[i];
        result = (result^arr2[i]);
        result2 = (result2^arr2[i]);
    }

    cout<<result<<'\n';

    fo(i,n-2) {
        cin>>num;
        result2 = (result2^num);
    }

    cout<<result2<<"\n";

    return 0;
}