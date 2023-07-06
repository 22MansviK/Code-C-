#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int bitwiseComplement(int n) {
        int ans = 0;
        int i = 0;
        while(n!=0)
        {
            int bit = n & 1;
            int r = ~bit;
            ans = (r * pow(10,i)) + ans;

            n = n >> 1;
            i++;
        }
        int result = 0;
        int j;
        while(ans != 0)
        {
            int digit = ans % 10;

            if(digit == 1)
            {
                result = digit*pow(2,j) + result;

                ans = ans / 10;
                j++;
            }
        }
        return result;
        
    }

    int main()
    {
        int n;
        cin>>n;
        cout<<bitwiseComplement(n)<<endl;
        return 0;
    }