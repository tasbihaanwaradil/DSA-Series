//Sum of Odd Numbers from 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (i<=n){
        if(i%2 != 0){
            sum += i;
        }
        i += 1;
    }
    cout << "Sum of odd numbers from 1 to n is: " << sum << endl;
    return 0;
}