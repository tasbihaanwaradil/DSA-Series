// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int given_array[5] = {1,2,3,4,5};
//     for (int start = 0; start < n; start++){
//         for (int end = start; end < n; end++){
//             for(int i = start; i <= end; i++){
//                 cout << given_array[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }


//     return 0;
// }


//Parctice
#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for (int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
     return 0;
}
