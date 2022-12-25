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

    string result;

    fo(i,str.size()) {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'y' || str[i] == 'Y' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            continue;
        }
        else {
            result.push_back('.');
            if(str[i] >= 65 && str[i] <= 91) {
                result.push_back(tolower(str[i]));
            }
            else {
                result.push_back(str[i]);
            }
        }
    }

    cout<<result;

    return 0;
}