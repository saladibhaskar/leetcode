class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        priority_queue<int> p;
    
        int i=0, d =0; 
        for(i=0; i<h.size()-1; i++){ 
            
            d = h[i+1]-h[i];
            
            if(d < 0){
                continue;
            }

            b -= d; 
            p.push(d); 
       
            if(b < 0){
                b += p.top(); 
                p.pop(); 
                l--;
            }

          
            if(l < 0) break;
        }
        
        
        return i;
    }
};