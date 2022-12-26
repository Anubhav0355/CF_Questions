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

bool isAcceptable(int num) {
    if(num%3 == 0 || num%10 == 3) {
        return false;
    }

    return true;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--) {
        int k;
        cin>>k;

        int currentNum = 0;
        int i = 0;

        while(true) {
            if(isAcceptable(currentNum + 1)) {
                currentNum++;
                i++;
            }
            else {
                currentNum++;
            }

            if(i == k) {
                break;
            }

        }

        cout<<currentNum<<"\n";
    }

    return 0;
}