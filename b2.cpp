
#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int nt(int n){
    for (int i =2; i <= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return n>1;
}


bool cs(int n){
    int res = 0;
    while(n != 0){
        res = n % 10;
        if(!(res ==2 || res == 3 || res == 5 || res == 7)) return false;
        n /= 10;
    }
    return true;
}

int tong(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return nt(sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b , cnt = 0; cin >> a >> b;
    for (int  i =a ; i <= b; i++){
        if(nt(i) && cs(i) && tong(i)){
            cnt++;
        }
    }
    cout << cnt;
}
