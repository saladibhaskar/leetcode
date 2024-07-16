class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinked=numBottles;
        int empty=numBottles;
        while(empty>=numExchange)
        {
            drinked+=(empty/numExchange);
            empty=(empty/numExchange)+(empty%numExchange);
        }
        return drinked;
    }
};