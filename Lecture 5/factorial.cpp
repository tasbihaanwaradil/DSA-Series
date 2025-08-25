#include <iostream>
using namespace std;
int calculateFactorial(int n){
    if (n == 0 || n == 1){
        // cout << "factorial of " << n << " is 1";
        return 1;
    } else{
        if (n>1){
            int fact = 1;
            int i = 1;       //n=3 2<=3
            while (i<=n) 
            {
                fact *= i;   //6 1x2x3
                i++;         //4x3x2x1
            }
            return fact;
            
        }
    }
    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of numbers from 1 to " << n << " is: " << calculateFactorial(n);
    return 0;
}
// 3X2X1
