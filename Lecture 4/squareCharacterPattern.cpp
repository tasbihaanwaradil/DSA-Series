#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < n; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    
    return 0;
}