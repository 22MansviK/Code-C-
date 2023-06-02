#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int n,l; //   the number of variable-length arrays
    int q; // the number of queries
    cin>>n;
    int k;
    
    int a[n][k];
    for(int i=0; i<n; i++)
    {   
        cin>>k;
        for(int j=0; j<k; j++)
        {
            cin>>a[i][j];
        }
        

    }
    for(int l=0; l<q; l++)
    {   int i,j;
        cin>>i>>j;
        cout<<a[i][j];
    }
      

    return 0;
}