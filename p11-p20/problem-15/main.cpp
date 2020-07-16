/*

Explanation: 

This is a pathway problem, which is just pascal's triangle.

Formula ends up being:
    (2n)! /(n!) ^ 2 

*/

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

void solve(){
    ll a = 40, b = 20, sol;
    while(a > 20){
        sol *= a;
        --a;
        if(sol % b == 0){
            sol /= b;
            --b;
        }
        cout << "Solution: " << sol;
    }
    while(b > 1){
        sol /= b;
        --b;
        cout << "Solution: " << sol;
    }
    cout << "Solution: " << sol;
}

int main() {
    solve();
    return 0;
}