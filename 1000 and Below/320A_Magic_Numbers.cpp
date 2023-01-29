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

    bool isMagical = true;

    if(str[0] == '4') {
        isMagical = false;
    }

    if(str.find("444") != string::npos) {
        isMagical = false;
    }
    else {
        fo(i,str.size()) {
            if(str[i] != '1' && str[i] != '4') {
                isMagical = false;
                break;
            }
        }
    }

    if(isMagical) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}