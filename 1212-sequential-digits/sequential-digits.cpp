class Solution {
public:
   int num(int ln)
   {
       int s=0;
       int l=ln-1;
       for(int i=1;i<=ln;i++)
       {
           int b=pow(10,l);
           s+=i*b;
           l--;
       }
       return s;
   }
   int nm(int ln)
   {
      int s=0;
       int l=ln-1;
       for(int i=1;i<=ln;i++)
       {
           int b=pow(10,l);
           s+=1*b;
           l--;
       }
       return s;
        
   }
    vector<int> sequentialDigits(int low, int high) {
        string s=to_string(low);
        string d=to_string(high);
        int l=s.size();
        int i=num(l);
        int ad=nm(l);
        vector<int>v;
        while(i<=high)
        {
            if(i>=low && i<=high)
            {
                cout<<i;
                v.push_back(i);
            }
            if(i%10==9)
            {
                l++;
                i=num(l);
                ad=nm(l);
            }else
            {
                i+=ad;
            }
        }
        return v;
        
    }
};