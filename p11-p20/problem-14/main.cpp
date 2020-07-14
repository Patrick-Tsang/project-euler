/*

Explanation: 

Brute force -> doing full sequence for every single number under 10 ^ 6

This implementation uses a map to store all previous tallies, checking each
temporary value against previous solutions. 
*/

#include <iostream>
#include <map>

using namespace std;
using ll = long long;

void solve() {
    ll solution = 0, maxLength = 0, temp = 0, tally = 0;
    map <ll, ll> previous;
    for(ll i = 1; i < 1000000; i++){
        temp = i;
        tally = 1;
        while(temp != 1) {
            if(temp % 2 == 0){
                temp /= 2;
            } else {
                temp = temp * 3 + 1;
            }
            ++tally;
            if(previous[temp] != 0){
                tally += previous[temp];
                temp = 1;
            }
        }
        if(tally > maxLength){
            solution = i;
            maxLength = tally;
        }
        previous[i] = tally;

    }
    cout << "Solution: " << solution;
}

int main() {
    solve();
    return 0;
}