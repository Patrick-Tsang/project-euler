#include <iostream>

using namespace std;

int main(){
    int x = 0, y = 1, next = 0, total = 0;

    while(next < 4000000){
        next = x + y;
        x = y, y = next;
        if(next % 2 == 0){
            total += next;
        }
    }
    
    cout << "Total: " << total;
    
    return 0;
}