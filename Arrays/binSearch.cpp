#include <iostream>
using namespace std;

int bin(int arr[],int n,int key){
    int l = 0,r = n - 1;
    int c = -1;
    while(l < r){
        int mid = (l+r)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return c;
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
    int key;
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    int k = bin(arr,n,key);
    if(k == -1){
        cout << key << " not found " << endl;
    }
    else{
        cout << key << " found in index " << k << endl;
    }

}