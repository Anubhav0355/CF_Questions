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
    
    string str;
    cin>>str;

    if(str[0] > '4' && str[0] != '9') {
        cout<<9 - (str[0]- '0');
    }
    else {
        cout<<str[0];
    }

    for(int i=1; i<str.size(); i++) {
        if(str[i] > '4') {
            cout<<9 - (str[i] - '0');
        }
        else {
            cout<<str[i];
        }
    }

    return 0;
}