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
const ll INF = 10e9;
const ll mod = 1e9 + 7;

bool is_prime(ll n){
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n){
    ll sum = 0;
    while (n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
bool isPalindrome(ll number) {
    ll originalNumber = number, reversedNumber = 0;
    while (number > 0) {
        ll digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return (originalNumber == reversedNumber);
}

bool stringIsPalindrome(string s){
    ll sz = s.size();
    for(ll i = 0; i < sz/2; i++) {
        if(s[i] != s[sz-i-1]){
            return false;
        }
    }
    return true;
}
vll prime_numbers;
void sieve(ll n){
    prime_numbers.resize(n + 1, true);
    prime_numbers[0] = prime_numbers[1] = false;
    for(ll i=2; i <= sqrt(n); i++){
        if (prime_numbers[i]) {
            for(ll j=i*i; j<=n; j+=i) {
                prime_numbers[j] = false;
            }
        }
    }
}
ll fact(ll n) {
    if ((n==0)||(n==1))
        return 1;
    else
        return n*fact(n-1);
}

/*************************** START ***************************/

void solve(){
    ll n;
    cin>>n;
    n= (n*567/9+7492)*235/47-498;
    if(n<0){
        n= -n;
    }
    n= n/10-(n/100)*10;
    cout<<n<<endl;
}
int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    //cin.ignore();
    ll cnt=1;
    while (tCases--){
        solve();
        //cout<<cnt<<endl;
        //cnt++;

    }
    return 0;
}