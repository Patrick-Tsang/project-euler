#include <iostream>

using ll = long long;

int main() {
    ll count = 0;
    for(int i = 1; i++; i < 1000){
        if(i % 3 == 0 || i % 5 == 0){
            count += i
        }
    }
    std::cout << "Total: " << count;
}