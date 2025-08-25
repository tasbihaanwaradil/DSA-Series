#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int n = 7;
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Sum of Maximum Subarray is: " << maxSum;
    return 0;
}