class Solution {
public:
    int passThePillow(int n, int time) {
     int rem=time%(n-1);
     int rnd=time/(n-1);
     if(rnd%2==0)
     {
        return rem+1;
     } 
     return n-rem;
    }
};