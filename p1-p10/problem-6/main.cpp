#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main() {
    ll sumOfSquares = 0;
    for(ll i = 1; i < 101; i++){
        sumOfSquares += pow(i, 2);
    }

    ll squareOfSum = pow((101) * 50,2);

    cout << "Solution: " << squareOfSum - sumOfSquares;
    return 0;
}