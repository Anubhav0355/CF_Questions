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

    int arr[7];
    fo(i,7) {
        cin>>arr[i];
    }

    int temp = 0;
    int i = 0;

    while(temp < n) {
        temp += arr[i++];
        if(i == 7) {
            i = 0;
        }
    }

    if(i==0) {
        cout<<7;
    }
    else {
        cout<<i;
    }

    return 0;
}