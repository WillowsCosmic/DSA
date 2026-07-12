#include <iostream>
#include <vector>
using namespace std;

void CountingSort(int arr[], int n)
{
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        largest  = max(largest,  arr[i]);
        smallest = min(smallest, arr[i]);
    }

    int range = largest - smallest + 1;
    vector<int> freq(range, 0);

    for (int i = 0; i < n; i++)
        freq[arr[i] - smallest]++;   // shift index by smallest

    int j = 0;
    for (int x = 0; x < range; x++) {   // iterate over freq size, not n
        while (freq[x] > 0) {
            arr[j++] = x + smallest;    // shift value back
            freq[x]--;
        }
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);
    CountingSort(arr,n);
    for(auto x : arr){
        cout << x << " , ";
    }

    cout << endl;
    return 0;
}