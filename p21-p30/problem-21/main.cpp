/*

Explanation: 

*/

#include <iostream>

using namespace std;
using ll = long long;

int sums[10000];
int sol = 0;

void solve(){

    for (int i = 1; i < 10000; ++i){
        //cout << i << ": ";
        sums[i] = 0;
        for (int j = 1; j <= i / 2; ++j){
            if (i % j == 0){
                sums[i] += j;
                //cout << j << " ";
            }
            // cout << "= " << sums[i] << "\n";
        }
    }

    for (int s = 1; s < 10000; ++s){
        if(sums[s] < 10000 && s == sums[sums[s]] && s != sums[s]){ 
            sol += s;
            cout << s << ", " << sums[s] << "\n";
        }
    }
    cout << sums[sums[220]] << "\n";
    cout << "Solution: " << sol << "\n";
}

int main(){
    solve();
    return 0;
}