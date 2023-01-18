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
    
    int k;
    cin>>k;

    int months[12];
    fo(i,12) {
        cin>>months[i];
    }

    if(k==0) {
        cout<<0;
        return 0;
    }

    sort(months,months+12,greater<int>());

    int minimumMonths = 1;
    int currentHeight = months[0];
    int i=1;

    while(currentHeight < k && i < 12) {
        currentHeight += months[i++];
        minimumMonths++;
    }

    if(currentHeight < k) {
        cout<<-1;
    }
    else {
        cout<<minimumMonths;
    }

    return 0;
}