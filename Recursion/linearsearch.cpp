#include<iostream>
using namespace std;

void find(int *arr, int size, int key)
{
    if(size==0)
    {
        cout<<"Not found";
    }
    if(key!=arr[0])
    {
        find(arr+1,size-1,key);
    }
    else{
        cout<<"Found";
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    find(arr,5,3);
    return 0;
}