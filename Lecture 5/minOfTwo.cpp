#include <iostream>
using namespace std;
//Min of Two Numbers
int min(int a, int b){ //parameters
    if (a < b){
        return a;
    } else {
        return b;
    }
}
int main(){
    cout << "Minimum number is: " << min(104,101); //arguments
    return 0;
}