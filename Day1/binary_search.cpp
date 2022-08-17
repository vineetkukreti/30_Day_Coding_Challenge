#include <iostream>
using namespace std;

// int binarySearch(int *arr, int l, int h, int x)
// {
//     while (l <= h)
//     {
//         int mid = l + (h - l) / 2;
//         if (arr[mid] == x)
//             return mid;
//         if (arr[mid] > x)
//             h = mid - 1;
//         else
//             l = mid + 1;
//     }
//     return -1;
// }
int binarySearch(int *arr, int l, int h, int x)
{
    if(l<=h)
    {
         int mid = l + (h - l) / 2;
        if(arr[mid]==x)
            return mid;
        else
        if(arr[mid]>x)
         return binarySearch(arr,l,mid-1,x);
         else
         {
         return binarySearch(arr,mid+1,h,x);
         }
    }
    else
    {
    return -1;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 40  ;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    cout << "Result : " << result << endl;
    return 0;
}