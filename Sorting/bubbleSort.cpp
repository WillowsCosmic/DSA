#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i = 1;i <= n;i++){
        for(int j = 0;j <= n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr,n);
    for(auto x : arr){
        cout << x << " , ";
    }

    cout << endl;
    return 0;
}