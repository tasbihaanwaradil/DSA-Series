// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     bool isPrime = true;
//     cout << "Enter a number: ";
//     cin >> n;
    
//     for(int i =2; i*i<=n; i++){
//         if (n % i == 0){
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true){
//         cout << "Prime Number\n";
//     } else{
//         cout << "Non Prime Number\n";
//     }
//     return 0;
    
// }


#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i * i <= n; i++){
            if (n % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime){
        cout << "Prime Number\n";
    } else {
        cout << "Non Prime Number\n";
    }

    return 0;
}
