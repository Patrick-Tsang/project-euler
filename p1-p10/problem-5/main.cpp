#include <iostream>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    ll res = a;
    if(b < a){
        res = b;
    }
    while(true){
        if (res % a == 0 && res % b == 0){
            return res;
        }
        res += 1;
    }
}


int main() {
    ll res = 1;
    for(ll i = 2; i <= 20; i++){
        res = lcm(res, i);
    }
    cout << "Solution: " <<  res;
}