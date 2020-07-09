/*

Explanation: 
 This is broken ...


*/

#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;
using ll = long long;

const ll n = 2000001;
bitset<n> bs;

void sieve(){
    ll limit = (ll)floor(sqrt(n)) + 1;
    bs.set(0);
    bs.set(1);

    for(ll i = 4; i <= n ; i += 2){
        bs.set(i);
    }

    for(ll i = 3; i <= n; i+=2){
        if(!bs[i]){
            for(int j = i * i; j < n; j += i) bs.set(i);
        }
    }
}

int main() {
    ll total = 0;
    sieve();
    for(ll i = 0; i < n; i++){
        if(!bs[i]) total += i;
    }
    cout << "Total: " << total;
    return 0;
}