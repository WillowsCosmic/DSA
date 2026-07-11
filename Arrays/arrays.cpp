#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout << "Enter the length of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array" << endl;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    printArray(arr,n);

    
    return 0;
}