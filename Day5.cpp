class Solution
{
public:
    int firstUniqChar(string s)
    {
        // unordered_map<char,int> m;
        // for(char c :s)
        // {
        //     m[c]++;
        // }
        // for(int i=0;i<s.size();i++)
        // {
        //     if(m[s[i]]==1)
        //         return i;
        // }
        // return -1;
        // Better approch.
        unordered_map<char, pair<int, int>> m;
        int n = s.size();
        int index = n;
        for (int i = 0; i < n; i++)
        {
            m[s[i]].first++;
            m[s[i]].second = i;
        }

        for (auto &a : m)
        {
            if (a.second.first == 1)
                index = min(index, a.second.second);
        }
        return index == n ? -1 : index;
    }
};