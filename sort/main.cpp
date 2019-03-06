#include <iostream>

using namespace std;

template <typename T>
int partition(T arr[], int l, int r)
{
    T v = arr[l];
    int j = l;
    for (int i = l + 1; i <= r; ++i)
    {
        if (arr[i] < v)
            swap(arr[++j], arr[i]);
    }
    swap(arr[l], arr[j]);
    return j;
}

template <typename T>
void quickSort(T arr[], int l, int r)
{
    if (l < r)
    {
        int mid = partition(arr, l, r);
        quickSort(arr, l, mid - 1);
        quickSort(arr, mid + 1, r);
    }
}

template <typename T>
void print(T arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{
    int arr[11] = {1, 4, 2, 5, 6, 8, 2, 1, 3, 9, 7};
    quickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
    print(arr, sizeof(arr) / sizeof(int));
    cout << "hello world" << endl;
}
