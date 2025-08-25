#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << (n >= 0? "Number is positive":"Number is negative");
    return 0;
}