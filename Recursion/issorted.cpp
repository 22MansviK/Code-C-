#include<iostream>
using namespace std;
int IsSorted(int arr[], int n)
{
    if(n==0)
    {
        return 1;
    }
    for(int i=n-1; i>=0; i++)
    {
        if(arr[i]<arr[n-1])
        {
            return IsSorted(arr, n-1);
        }
    }
    return 0;
}
int main()
{
    int a[5] = {1,2,3,4,5};

    int b[6] = {8,9,7,6,1,10};
    IsSorted(a,5);
    return 0;
}