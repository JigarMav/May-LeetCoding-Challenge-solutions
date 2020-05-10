class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 0 || num == 1) //base case
            return num;

        long long int l = 0;
        long long int h = num / 2; //optimization -> sqrt(num) <= num/2

        while (l <= h) //notice equality here, check for 16
        {
            long long int mid = l - (l - h) / 2;
            if (mid * mid == num)
                return true;

            else if (mid * mid > num)
                h = mid - 1;

            else
                l = mid + 1;
        }
        return false;
    }
};