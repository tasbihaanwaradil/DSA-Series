// Qs: Print numbers from 1 to n using while Loop

#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    cout << "Enter a number: ";
    cin >> n ;
    while (count <= n){
        cout << count << endl ;
        count +=1 ;
    }
    return 0;
}

