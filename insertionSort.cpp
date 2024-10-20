#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    for(int i = 1; i<n; i++){
        int ele = arr[i];

        int j = i-1;

        while(j>=0 && arr[j]>ele){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = ele;
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    cout << "unsorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    insertionSort(arr, n);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}