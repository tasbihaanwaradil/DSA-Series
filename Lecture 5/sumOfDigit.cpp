//sum of digits of a number
#include <iostream>
using namespace std;
int sumOfdigits(int num){
    int digitSum = 0;
    while (num>0){
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}
int main(){
    cout << sumOfdigits(1232);
    return 0;
}