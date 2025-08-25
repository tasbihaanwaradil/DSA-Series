// Home Work Problem 1: Sum of all numbers form 1 to n which are divisible by 3
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<=n; i++){ 
        if (i % 3 == 0){       
            sum += i;
        }
    }
    cout << "Sum of all numbers which are divisible by 3 is: " << sum << endl;
}