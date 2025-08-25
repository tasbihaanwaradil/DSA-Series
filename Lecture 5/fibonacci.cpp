// //WAF to print nth fibonacci 0 1 1 2 3 5 8 13

// #include <iostream>
// using namespace std;
// //Print Fobonacci Sequence
// void printFibonacciSeq(int n){
//     int first = 0;
//     int sec = 1;
//     int next = 0;
//     if (n == 0){
//         cout << "0" << endl;
//     } else {
//         for (int i = 1; i <= n; i++){
//             cout << first << " ";
//             next = first + sec;
//             first = sec;
//             sec = next;
//         }
//     }
// }
// int main(){
//     int n;
//     cout << "Enter a number n: ";
//     cin >> n;
//     printFibonacciSeq(n);
//     return 0;
// }


#include <iostream>
using namespace std;

// Function to print Fibonacci sequence up to n terms
void printFibonacciSeq(int n){
    int first = 0;
    int sec = 1;
    int next = 0;

    if (n == 0){
        cout << "0" << endl;
    } else {
        for (int i = 1; i <= n; i++){
            cout << first << " ";
            next = first + sec;
            first = sec;
            sec = next;
        }
    }
}

int main(){
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    printFibonacciSeq(n);
    return 0;
}