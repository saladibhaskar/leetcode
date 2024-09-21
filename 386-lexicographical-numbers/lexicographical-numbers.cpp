class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>result;
        int currentNumber = 1;

        for (int i = 0; i < n; ++i) {
            result.push_back(currentNumber);

            if (currentNumber * 10 <= n) {
                currentNumber *= 10;
            } else {
                while (currentNumber % 10 == 9 || currentNumber >= n) {
                    currentNumber /= 10;
                }
                ++currentNumber;
            }
        }

        return result;
    }
};