/*

Explanation: 

*/

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;


vector<int> v;

void solve() {
    int overflow = 0;
    int sol = 0;
    v.push_back(1);

    for(int j = 1; j <= 100; j++){
        overflow = 0;
        for(int i = 0; i < v.size(); i++){
            v[i] *= j;
            v[i] += overflow;
            if(v[i] > 9){
                overflow = (v[i] - (v[i] % 10))/10;
                v[i] = v[i] % 10;
            } else {
                overflow = 0;
            }
        }
        while(overflow != 0){
            v.push_back(overflow % 10);
            overflow = (overflow - overflow % 10)/10;
        }
    }

    for(int d : v){
        sol += d;
    }

    cout << "Solution: " << sol << "\n";
}

int main() {
    solve();
    return 0;
}