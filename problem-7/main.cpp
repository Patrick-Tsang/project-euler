#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> v;
ll i = 10001, x = 1;

bool isPrime(){
    for(ll val : v){
        if(x % val == 0) return false;
    }
    return true;
}

int main() {
    while(i > 0){
        x++;
        if(isPrime()){
            v.push_back(x);
            i--;
        }
    }
    cout << "Solution: " << x;
    return 0;
}