/*

Explanation: 

This solution takes advantage of Euclid's Formula,
    - a = m^2 - n^2
    - b = 2mn
    - c = m^2 + n^2
where m > n > 0.

Solved for a + b + c = 1000 (quadratically).

*/

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

double a = 1, b = 1;

bool gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    for(b = 1; b < 1000; b++){
        a = -b/2 + sqrt(pow(b, 2) + 2000)/2;
        if(floor(a) == a){
            break;
        }
    }
    
    cout << "Solution: " << (pow(a, 2) - pow(b, 2)) * 2 * a * b * (pow(a, 2) + pow(b, 2));
    return 0;
}