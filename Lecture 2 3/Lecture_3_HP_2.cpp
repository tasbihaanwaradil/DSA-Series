//print factorial of a number n

#include <iostream>
using namespace std;
int main(){
    int n;
    int fact = 1;
    cout << "Enter a number n: ";
    cin >> n;
    if (n == 0 || n == 1){
        cout << "Factorial of " << n << " is 1";
    } else {
        for (int i=2; i<=n; i++){
            fact *= i;
        }
    cout << "Factorial of " << n << " is: " << fact;
    }
    return 0;
}


