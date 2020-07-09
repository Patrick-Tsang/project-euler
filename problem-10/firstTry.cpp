/*

Explanation: 

This implementation keeps track of all found primes in a vector. Then it tests
each number under 2000000 against this vector. It's awfully slow, 10/10 would
not recommend. :(

*/

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

vector<ll> v;
ll x;
ll total = 2;

bool isPrime(){
    for(ll val : v){
        if(x % val == 0) return false;
    }
    return true;
}

int main() {
    
    v.push_back(2);
    for(x = 3; x < 2000000; x += 2){
        if(isPrime()){
            total += x;
            v.push_back(x);
        }
    }
    cout << "Total: " <<  total;
    
    return 0;
}