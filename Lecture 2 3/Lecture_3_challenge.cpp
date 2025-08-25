// Sum of Even Numbers from 1 to n 
#include <iostream>
using namespace std;

int main(){
    int n,i, sum;
    cout << "Enter a number: ";
    cin >> n;

    for (i=2, sum=0; i<=n; i+=2){
        cout << i << " ";
        sum += i;
    }
    cout << endl;
    cout << "Sum of Even numbers is: " << sum << endl;
    return 0;
}