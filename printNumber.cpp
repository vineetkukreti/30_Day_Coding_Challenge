// Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
// Input Format :
// Integer n
// Output Format :
// Numbers from 1 to n (separated by space)
// Constraints :
// 1 <= n <= 10000
// Sample Input 1 :
//  6
// Sample Output 1 :
// 1 2 3 4 5 6
// Sample Input 2 :
//  4
// Sample Output 2 :
// 1 2 3 4

//1. using iteration 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i = 1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

// 2 recursion method
#include<iostream>
using namespace std;
void printNumber(int n)
{
    if(n==0)
    return ;
    printNumber(n-1);
    cout<<n<<" ";
}
int main()
{
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   printNumber(n);
}

