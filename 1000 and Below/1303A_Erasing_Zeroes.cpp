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
    
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        int zeroes = 0;
        bool firstOneFound = false;

        fo(i,str.size()) {
            if(str[i] == '0' && firstOneFound) {
                bool oneFoundAgain = false;
                int temp = 0;
                for(int j=i; j<str.size(); j++) {
                    if(str[j] == '1') {
                        oneFoundAgain = true;
                        i = j;
                        break;
                    }
                    else {
                        temp++;
                    }
                }
                if(!oneFoundAgain) {
                    break;
                }
                else {
                    zeroes += temp;
                }
            }
            else if(str[i] == '1'){
                firstOneFound = true;
            }
        }

        cout<<zeroes<<"\n";

    }

    return 0;
}