#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if ((!swapped))
            break;
    }
}

void recursiveBubbleSort(vector<int> &arr, int n)
{
    // Base case: If the array has only one element or no elements, it's already sorted
    if (n == 1)
        return;

    // Perform one pass of bubble sort
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swap the elements
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swapped = true;
        }
    }

    // If no elements were swapped, the array is already sorted
    if (!swapped)
        return;

    // Recursively call the function for the remaining unsorted portion of the array
    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    cout << "unsorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    bubbleSort(arr, n);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}