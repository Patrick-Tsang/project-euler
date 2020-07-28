/*

Explanation: 
This has been my least favourite question to do. It's incredibly boring.
There's absolutely nothing special about any kind of implementation of this
question.

*/

#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int d[20] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
int t[8] = { 6, 6, 5, 5, 5, 7, 6, 6 };

int sum = 0;

int below100(int n){
    if(n < 20) return d[n];
    return t[n / 10 - 2 | 0] + d[n % 10];
}

int all1000(int n){
    if(n < 100) return below100(n);

    int res = 0, h = n / 100 % 10, t = n / 1000, s = n % 100;

    if( n > 999 ) res += below100(t) + 8;
    if( h != 0 ) res += d[h] + 7;
    if( s != 0 ) res += below100(s) + 3;
    
    return res;
}

void solve(){
    for(int i = 1; i <= 1000; i++){
        sum += all1000(i);
    }
    cout << "Sum: " << sum << endl;
}

int main() {
    solve();
    return 0;
}