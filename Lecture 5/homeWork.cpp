//WAF to check if a number is prime or not
#include <iostream>
using namespace std;
bool checkPrime(int n){
    if (n==0 || n==1){
        return false;
    }

    // Prime number checking
    for (int i=2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (checkPrime(n)){
        cout << n << " is a Prime number";
    } else {
        cout << n << " is a non Prime number";
    }

    return 0;
}



// WAF to print all prime numbers from 2 to n
//WAF to print nth fibonacci 0 1 1 2 3 5 8 13
//explore Switch


