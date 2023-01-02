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
        int n;
        cin>>n;

        int digit = n%10;
        int numOfDigit = log10(n) + 1;
        int numOfKeyPressed = 0;

        if(numOfDigit == 1) {
            numOfKeyPressed = 1;
        } 
        else if(numOfDigit == 2) {
            numOfKeyPressed = 3;
        }
        else if(numOfDigit == 3) {
            numOfKeyPressed = 6;
        }
        else {
            numOfKeyPressed = 10;
        }

        numOfKeyPressed += (digit-1)*10;

        cout<<numOfKeyPressed<<"\n";

    }

    return 0;
}