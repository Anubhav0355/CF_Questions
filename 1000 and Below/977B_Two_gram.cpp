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

    string str;
    cin>>str;

    if(n==2) {
        cout<<str;
        return 0;
    }

    string maxString;
    int maxFreq = INT_MIN;

    fo(i,str.size()) {
        string temp1 = str.substr(i,2);
        int freq = 1;
        for(int j=i+1; j<str.size(); j++) {
            if(str.substr(j,2) == temp1) {
                freq++;
            }
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            maxString = temp1;
        }
    }

    cout<<maxString;

    return 0;
}