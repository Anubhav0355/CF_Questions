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
    
    string cardOnTable;
    cin>>cardOnTable;

    string handCards[5];
    fo(i,5) {
        cin>>handCards[i];
    }

    bool isPossible = false;

    fo(i,5) {
        if(cardOnTable[0] == handCards[i][0] || cardOnTable[1] == handCards[i][1]) {
            isPossible = true;
            break;
        }
    }

    if(isPossible) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}