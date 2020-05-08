class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int num : nums)
            m[num]++;
        int n = nums.size();
        for (auto i : m)
        {
            if (i.second > n / 2)
                return i.first;
        }
        return 0;
    }
};