#include<iostream>
using namespace std;
void reverseArray(int *a,int start,int end)
{
    int mid = (start+end)/2;
   // cout<<start<<":"<<mid<<":"<<end<<endl;
    for(int i = start;i<mid;i++)
    {
        int temp = a[i];
        a[i] = a[end-1-i];
        a[end-1-i] = temp;
    }
}
void printArray(int *a,int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void rotate(int *a, int d, int n)
{
    reverseArray(a,0,n);
    reverseArray(a,0,n-d);
    reverseArray(a,n-d,n);
   
}

int main()
{ 
      int n = 11;
    int a[] = {1 ,3 ,6 ,11, 12, 17, 22, 26 ,30 ,33 ,38};
    printArray(a,n);
    rotate(a,7,n);
    printArray(a,n);
}