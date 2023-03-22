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


bool isPalindrome(string str) {
    int front = 0;
    int back = str.size()-1;

    while(front < back) {
        if(str[front] != str[back]) {
            return false;
        }
        front++;
        back--;
    }
    return true;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin>>str;

    bool isPossible = true;

    if(isPalindrome(str)) {
        if(str.size()&1) {
            str.insert(str.size()/2,1,str[str.size()/2]);
        }
        else {
            str.insert(str.size()/2,1,'a');
        }
    }
    else {
        int front = 0;
        int back = str.size()-1;

        while(front < back) {
            if(str[front] != str[back]) {

                if(str[front+1] == str[back] && str[back-1] == str[front]) {
                    string temp1 = str, temp2 = str;
                    temp1.insert(back+1,1,str[front]);
                    temp2.insert(front,1,str[back]);

                    if(isPalindrome(temp1)) {
                        str = temp1;
                    }
                    else {
                        str = temp2;
                    }
                    break;
                }

                if(str[front+1] == str[back]) {
                    str.insert(back+1,1,str[front]);
                }
                else if(str[back-1] == str[front]) {
                    str.insert(front,1,str[back]);
                }
                else {
                    isPossible = false;
                }
                break;
            }
            front++;
            back--;
        }
    }

    // cout<<str<<"\n";

    if(isPossible && isPalindrome(str)) {
        cout<<str<<" ";
    }
    else {
        cout<<"NA";
    }

    return 0;
}