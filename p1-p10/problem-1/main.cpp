#include <iostream>
/*
Pretty basic, just running every number under 1000 through conditional
*/
int main() {
    int count = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            count += i;
        }
    }
    std::cout << "Total: " << count;
    return 0;
}