class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int n = coordinates.size();
        if (n == 2)
            return true;
        int x1, y1, xn, yn;
        x1 = coordinates[0][0];
        y1 = coordinates[0][1];
        xn = coordinates[n - 1][0];
        yn = coordinates[n - 1][1];
        if (xn - x1 == 0)
            return false;
        int m = (yn - y1) / (xn - x1);
        int c = y1 - m * x1;
        for (int i = 1; i < n - 1; i++)
        {
            if (m * coordinates[i][0] + c != coordinates[i][1])
                return false;
        }
        return true;
    }
};