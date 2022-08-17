#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
        return 1;
    int smalloutput = factorial(n-1);
    return n*smalloutput;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int output = factorial(n);
    printf("Factorial of %d id %d",n,output);
    return 0;
}