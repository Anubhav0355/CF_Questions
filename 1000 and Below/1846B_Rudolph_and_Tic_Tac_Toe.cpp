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

char arr[3][3];

bool check(char ch) {
    //row-wise
    fo(i,3) {
        bool isPossible = true;
        fo(j,3) {
            if(arr[i][j] != ch) {
                isPossible = false;
                break;
            }
        }
        if(isPossible) {
            return true;
        }
    }

    //col-wise
    fo(i,3) {
        bool isPossible = true;
        fo(j,3) {
            if(arr[j][i] != ch) {
                isPossible = false;
                break;
            }
        }
        if(isPossible) {
            return true;
        }
    }

    //diagonal
    if(arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) {
        return true;
    }
    
    if(arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) {
        return true;
    }

    return false;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--) {
        fo(i,3) {
            fo(j,3) {
                cin>>arr[i][j];
            }
        }

        if(check('X')) {
            cout<<"X\n";
            continue;
        }

        if(check('O')) {
            cout<<"O\n";
            continue;
        }

        if(check('+')) {
            cout<<"+\n";
            continue;
        }
        
        cout<<"DRAW\n";

    }

    return 0;
}