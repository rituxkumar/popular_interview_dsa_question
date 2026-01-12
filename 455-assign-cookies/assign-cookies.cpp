class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g), end(g));
        sort(begin(s), end(s));

        int a = g.size();
        int b = s.size();

        int i = 0;
        int j = 0;

        while (i < a && j < b) {
            if (g[i] <= s[j]) {
                i++;
            }
            j++;
        }

        return i;
    }
};