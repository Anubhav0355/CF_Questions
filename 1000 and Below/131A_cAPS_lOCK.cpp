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

    bool allUppercase = true;
    bool onlyFirstLowerCase;

    if(islower(str[0])) {
        onlyFirstLowerCase = true;
        allUppercase = false;
    }

    for(int i=1; i<str.size(); i++) {
        if(islower(str[i])) {
            onlyFirstLowerCase = false;
            allUppercase = false;
            break;
        }
    }

    if(allUppercase || onlyFirstLowerCase) {
        for(int i=0; i<str.size(); i++) {
            if(islower(str[i])) {
                str[i] = toupper(str[i]);
            }
            else {
                str[i] = tolower(str[i]);
            }
        }
    }

    cout<<str;

    return 0;
}