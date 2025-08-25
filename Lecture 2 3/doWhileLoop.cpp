// Do While Loop
// print numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;
    int i  = 1;
    cout << "Enter a number: ";
    cin >> n;

    do{
        cout << i << " ";
        i += 1;
    } while (i <= n);
}