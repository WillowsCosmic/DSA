#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};

    //Push Back
    arr.push_back(15);

    //print all the elements
    for(int i = 0;i < arr.size();i++){
        cout << arr[i] << " " << endl;
    }
}