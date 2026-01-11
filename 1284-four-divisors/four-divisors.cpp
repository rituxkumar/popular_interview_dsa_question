class Solution {
public:
    int sumFourDivisors(int num) {
        int divisior = 0;
        int sum = 0;

        for (int fact = 1; fact * fact <= num; fact++) {
            if (num % fact == 0) {
                int other = num / fact;
                if (other == fact) {
                    divisior += 1;
                    sum += fact;
                } else {
                    divisior += 2;
                    sum += (fact + other);
                }
            }
            if (divisior > 4)
                return 0;
        }

        return divisior == 4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        for (int& num : nums) {
            result += sumFourDivisors(num);
        }
        return result;
    }
};