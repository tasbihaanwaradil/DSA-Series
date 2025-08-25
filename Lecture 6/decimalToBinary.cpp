#include <iostream>
using namespace std;
int decimalToBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum>0){
        int rem = decNum % 2;
        decNum /= 2;                //Update
        ans += (rem * pow);      //Update
        pow *= 10;                  

    }
    return ans;                     //binary form
}

//binary to decimal
int binaryToDecimal(int binNum){
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int decNum, binNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;
    cout << "Enter a binary number: ";
    cin >> binNum;
    cout << "Binary number of " << decNum << " is: " << decimalToBinary(decNum) << endl;
    cout << "Decimal number of " << binNum << " is: " << binaryToDecimal(binNum) << endl;

    return 0;
}