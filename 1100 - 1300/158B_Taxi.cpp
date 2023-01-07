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

    int freqArray[5] = {0};
    int taxi = 0;
    int mini;

    int num;
    fo(i,n) {
        cin>>num;
        freqArray[num]++;
    }

    taxi += freqArray[4];
    mini = min(freqArray[1],freqArray[3]);
    taxi += mini;

    freqArray[1] -= mini;
    freqArray[3] -= mini;

    taxi += freqArray[2]/2;

    if(freqArray[2]&1) {
        freqArray[2] = 1;
    }
    else {
        freqArray[2] = 0;
    }


    if(freqArray[1] > 0) {
        if(freqArray[2] == 0) {
            taxi += freqArray[1]/4;
            if(freqArray[1]%4 != 0) {
                taxi += 1;
            }
        }
        else {
            if(freqArray[1]-2 > 0) {
                taxi += 1;
                freqArray[1] -= 2;

                taxi += freqArray[1]/4;
                if(freqArray[1]%4 != 0) {
                    taxi += 1;
                }
            }
            else {
                taxi += 1;
            }
        }
    }
    else {
        if(freqArray[2] > 0) {
            taxi += (freqArray[3] + 1);
        }
        else {
            taxi += freqArray[3];
        }
    }

    cout<<taxi;


    return 0;
}