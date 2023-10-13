/* Bismillahir Rahmanir Raheem */
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x/gcd(x,y))*y
#define pi M_PI
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define lpi(strt,en) for(ll i=strt; i<en; i++)
#define lpj(strt,en) for(ll j=strt; j<en; j++)
using namespace std;

/********* START *********/
void solve(){
    ll n; cin>>n;
    vector <ll > vc(n);
    for(ll i=0; i<n; i++){
        cin>>vc[i];
    }
    ll res = 0;
    ll current_cnt = 1;

    for(ll i=1; i<n; i++){
        if(vc[i] != vc[i-1]){
            res += current_cnt * (current_cnt + 1) / 2;
            current_cnt = 1;
        } 
        else{
            current_cnt++;
        }
    }

    res += current_cnt * (current_cnt + 1) / 2;
    ll val= n*(n+1)/2;
    ll ans=val- res;
    cout<<ans<<endl;
}
int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    //cin.ignore();
    ll cnt=1;
    while (tCases--){
        cout<<"Case "<<cnt<<": ";
        solve();
        //cout<<cnt<<endl;
        cnt++;

    }
    return 0;
}