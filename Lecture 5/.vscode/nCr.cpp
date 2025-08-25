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
                i++;         //4
            }
            return fact;
            
        }
    }
    
}


//nCr Function
int nCr(int n, int r){
    int nFact = calculateFactorial(n);
    int rFact = calculateFactorial(r);
    int numr = calculateFactorial(n-r);
    
    return nFact / (rFact*numr);
}
int main(){
    //nCr
    //input n
    //input r
    //nCr = n!/r!(n-1)!
    int n;
    int r;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter value for r: ";
    cin >> r;
    cout << "nCr is: " << nCr(n,r);
    

    return 0;
}