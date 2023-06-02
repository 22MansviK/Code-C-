#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    
    
    for(int i=0; i<N/2; i++)
    {   int temp = arr[i];
        arr[i]=  arr[N-i-1];
        arr[N-i-1] = temp; 
    }
     for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
