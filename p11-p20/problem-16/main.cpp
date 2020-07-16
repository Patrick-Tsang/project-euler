/*

Explanation: 
Storing in vector because too big to actually store in a number (304 digits)
*/

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

vector<int> v;

void solve(){

    int overflow, sol = 0;
    v.push_back(2);

    for(int j = 0; j < 999; j++){
        overflow = 0;
        for(int i = 0; i < v.size(); i++){
            v[i] += v[i] + overflow;
            if(v[i] > 9){
                overflow = 1;
                v[i] -= 10;
            } else {
                overflow = 0;
            }
        }
        if(overflow != 0){
            v.push_back(overflow);
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