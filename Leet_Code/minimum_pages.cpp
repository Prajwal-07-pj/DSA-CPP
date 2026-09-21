#include <iostream>
using namespace std;

int findPages(int arr[], int n, int k)
{
    if (k > n)
        return -1;

    long long start = 0;
    long long end = 0;
    long long ans = -1;

    // Find maximum book pages and total pages
    for (int i = 0; i < n; i++)
    {
        start = max(start, (long long)arr[i]);
        end += arr[i];
    }

    // Binary search
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        long long pages = 0;
        int students = 1;

        for (int i = 0; i < n; i++)
        {
            if (pages + arr[i] > mid)
            {
                students++;
                pages = arr[i];
            }
            else
            {
                pages += arr[i];
            }
        }

        if (students <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {12, 34, 67, 90};

    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << findPages(arr, n, k);

    return 0;
}