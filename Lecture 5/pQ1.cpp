#include <iostream>
using namespace std;
int sumOfNumbers(int n){
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    return sum;    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is :" << sumOfNumbers(n);
}