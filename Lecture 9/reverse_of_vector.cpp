#include <iostream>
#include <vector>
using namespace std;
// Reverse of a vector Function
void reverse_of_vec(vector<int>& num, int size_of_vec){
    int start = 0;
    int end = size_of_vec -1;
    while (start < end){
        swap(num[start],num[end]);
        start ++;
        end --;
    }
    

}
int main(){

    vector <int> num = {4,2,7,8,1,2,5};
    int size_of_vec = num.size();

    reverse_of_vec(num,size_of_vec);
    // print reverse of vector
    for (int val: num){
        cout << val << " " ;
    }
    
    return 0;
}