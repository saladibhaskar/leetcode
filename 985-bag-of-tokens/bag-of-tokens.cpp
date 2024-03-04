 class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0;
        int j=tokens.size()-1;
        int c=0;
        int maxi=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            
            if(tokens[i]<=power){
                c+=1;
                power-=tokens[i];
                i++;
                maxi=max(c,maxi);
            }
            else if(c>0){
                
                    c--;
                    power+=tokens[j--];
                    
            }
                else{
                    break;
                }


        }
        return maxi;

    }
};