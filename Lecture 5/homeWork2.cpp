// // WAF to print all prime numbers from 2 to n
// #include <iostream>
// using namespace std;
// //check prime 
// bool isPrime(int n){
//     if(n == 0 || n == 1){
//         return false;
//     }
//     for (int i = 2; i*i <= n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// //Print all Prime numbers
// void printPrimeNumbers(int n){
//     for (int i = 2; i <= n; i++){
//         if (isPrime(i)){
//             cout << i << " ";
//         }

//     }
//     cout << endl;
// }
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     printPrimeNumbers(n);
//     return 0;
// }


#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Function to print all prime numbers from 2 to n
void printPrimeNumbers(int n){
    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimeNumbers(n);
    return 0;
}
