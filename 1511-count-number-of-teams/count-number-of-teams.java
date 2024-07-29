class Solution {
    public int numTeams(int[] rating) {
        int ans = 0;
        for(int i = 1; i < rating.length - 1; i++) {
            int middle = rating[i];
            int smallerNumber = 0;
            int largerNumber = 0;
            for(int left = 0; left < i; left++) {
                if(middle > rating[left]) {
                    smallerNumber++;
                }
            }
            for(int right = i + 1; right < rating.length; right++) {
                if(middle < rating[right]) {
                    largerNumber++;
                }
            }
            ans += smallerNumber * largerNumber;

            int largerLeft = i - smallerNumber;
            int smallerRight = rating.length - i - largerNumber - 1;
            ans += largerLeft * smallerRight;
        }
        return ans;
    }
}
