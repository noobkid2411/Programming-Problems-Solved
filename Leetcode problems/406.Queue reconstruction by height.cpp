class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
          int n = people.size();
    vector<vector<int>> ans(n);
    vector<bool> check(n, false);
    sort(people.begin(), people.end());
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int j = 0;
        while (count < people[i][1])
        {
            if ((!check[j]) or (ans[j][0] == people[i][0]))
            {
                count++;
            }
            j++;
        }
        while (check[j])
        {
            j++;
        }
        ans[j] = people[i];
        check[j] = true;
    }
    return ans;
    }
};