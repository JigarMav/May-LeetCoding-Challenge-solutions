#include <bits/stdc++.h>
class Solution
{
public:
    int findComplement(int num)
    {
        //         SOLUTION 1
        // int i=0;
        // int res=0;
        // while(num)
        // {
        //     if((num&1)==0)
        //     {
        //         res+=1<<i;
        //     }
        //     num>>=1;
        //     i++;
        // }
        // return res;

        //         SOLUTION 2 - Doesnt work but can be helpful .
        // int k = (int)(log2(num));
        // int ans = 1;
        // return num^((ans<<(k+1))-1);

        //         SOLUTION 3
        // unsigned mask = ~0;
        // cout<<mask;
        // while (num & mask) mask <<= 1;
        // return ~mask&~num;

        //         SOLUTION 4
        int mask = 1;
        while (mask < num)
            mask = (mask << 1) | 1;
        cout << mask;
        return num ^ mask;
    }
};