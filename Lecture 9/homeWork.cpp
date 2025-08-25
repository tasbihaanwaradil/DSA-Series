// Linear Search Code Uisng vectors

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> num = {4,2,7,8,1,2,4,5};
    int target = 5;
    int size_of_vec = num.size();
    for (int i = 0; i<size_of_vec; i++){
        if (num[i] == target){
            cout << "Target found at: " << i << endl;
            break;
        }
    }
    return 0;
}