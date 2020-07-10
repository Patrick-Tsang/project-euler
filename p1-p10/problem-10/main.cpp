/*

Explanation: 

This implementation uses an optimised sieve, which only looks at odd
numbers under the sqrt of N. This halves the memory of the previous
implementation. i corresponds to 2i + 1, which can be used to figure
out the rest of the arithmetic in this problem.

*/

#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;
using ll = long long;

const ll n = 2000000;
const ll limit = (n-1)/2;
bitset<limit> bs;

void sieve(){
    ll climit = (sqrt(n) - 1) / 2;
    for(ll i = 1; i < climit; i++){
        if(!bs[i]){
            for(ll j = 2 * i * (i + 1); j < limit; j += 2 * i + 1){
                bs.set(j);
            }
        }
    }
}

int main() {
    ll total = 2;
    sieve();
    for(ll i = 0; i < limit; i++){
        if(!bs[i]) total += 2 * i + 1;
    }
    cout << "Total: " << total;
    return 0;
}