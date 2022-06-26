class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {

        int total = 0;
        for (int i = 0; i < k; i++) 
            total += cardpoints[i];
        int best = total;
        for (int i = k - 1, j = cardpoints.size()-1; ~i ; i--, j--) 
            total += cardpoints[j] - cardpoints[i], best = max(best, total);
        return best;
    }
};