/*

Explanation: 

*/

#include <iostream>

using namespace std;
using ll = long long;

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void solve(){
    int tally = 0, current = 2;
    for(int year = 1901; year < 2001; ++year){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) months[1] = 29;
        else months[1] = 28;
        for(int month = 0; month < 12; ++month){
            current = (current + months[month]) % 7;
            if(current == 0) tally++;
        }
    }
    cout << "Total: " << tally << endl;
}

int main() {
    solve();
    return 0;
}