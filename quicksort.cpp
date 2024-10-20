#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j = low; j<=high-1; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void quickSort(vector<int> &arr, int low, int high)
{
    if(low<high){
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
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

    quickSort(arr, 0, n-1);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}