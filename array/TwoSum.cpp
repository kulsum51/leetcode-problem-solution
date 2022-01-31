
vector<int> twoSum(vector<int>& a, int target)
{
    int n = a.size();
    vector<int> res;
    unordered_map<int, int>mp;
    for (int i = 0;i < n;i++)
    {
        int v = target - a[i];
        if (mp.find(v) != mp.end())
        {
            res.push_back(i);
            res.push_back(mp[v]);
            break;
        }
        mp.insert({ a[i],i });
    }
    return res;
}
