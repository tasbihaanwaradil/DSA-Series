#include <iostream>
#include <vector> //without it we can't use vectors
using namespace std;

int main(){
    //vector defination
    // vector <int>vec; //size 0 way 1 to initialize vector
    vector <int> vec1 = {1,2,3}; //way 2 to initialze a vector
    //way 3 
    // vector <int> vector3(3,0);
    // cout << vector3[0] << endl;
    // cout << vector3[1] << endl;
    // cout << vector3[2] << endl;

    // For Each Loop use for vectors
    // for (int i: vector3){
    //     cout << i << endl;
    // }
    // for (int i: vec1){
    //     cout << i << endl;
    // }

    // vector of characters
    // vector <char> alphabetsVector{'a','b','c','d'};
    // for(char val: alphabetsVector){
    //     cout << val << " ";
    // }
   // utilization of push_back and pop_back
   vector <int> newVec;
   cout << "Size  of vector before push_back = " << newVec.size() << endl;
   newVec.push_back(25);
   newVec.push_back(35);
   newVec.pop_back();
   newVec.pop_back();
   cout << "Size  of vector after push_back = " << newVec.size() << endl;
   for (int i: newVec){
    cout << i << " " ;
   } 

    return 0;
}