#include <iostream>

using namespace std;

bool isPalindrome(int num){
    int n, digit, rev = 0;
    n = num;
    do{
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    } while(n != 0);
    return rev == num;
}

int main(){

    int max, product = 0;

    for(int i = 999; i > 0; i--){
        for(int j = 999; j > 0; j--){
            product = i * j;
            if(max < product){
                if(isPalindrome(product)){
                    max = product;
                } 
            } else {
                break;
            }
        }
    }

    cout << "Solution: " << max;
}