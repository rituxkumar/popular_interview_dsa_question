class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;
        while (i < n) {
            int current_index = chars[i];
            int count = 0;

            while (i < n && chars[i] == current_index) {
                count++;
                i++;
            }
            // assign work.
            chars[index] = current_index;
            index++;

            if (count > 1) {
                string count_string = to_string(count);
                for (char& ch : count_string) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};