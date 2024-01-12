class Solution {
public:
    char roman(int n)
    {
        //cout<<n<<":";
        char a;
        if(n==1) a='I';
        if(n==5) a='V';
        if(n==10) a= 'X';
        if(n==50) a= 'L';
        if(n==100) a= 'C';
        if(n==500) a=  'D';
        if(n==1000) a='M';
        cout<<a<<" ";
        return a;
    }
    int len(int n)
    {
        int f=n,l=0;
        while(f!=0)
        {
            int r=f%10;
            l++;
            f=f/10;
        }
        return l;
    }
    string intToRoman(int n)
    {
       // n=2999;
        int l=0;
        int f=n;
        string s="";
        l=len(n);
        while(n!=0)//2994
        {
            int den=pow(10,l-1);//1000
             
            //int rm=n/den;//2994/1000==994
            int rep=n/den;//2000/1000=2
            if(n<10)
            {
                rep=n;
            }
           // cout<<n<<": "<<rep<<": ";
            if(rep<=3)
            {
              // cout<<den;
                while(rep>0)
                {
                    s+=roman(1*den);  
                    rep--;
                }
            }else if(rep==6||rep==7||rep==8)
            {
                s+=roman(5*den);
                rep-=5;
                while(rep>0)
                {
                    s+=roman(1*den); 
                    rep--;
                }

            }
            else if(rep==4)
            {
               s+=roman(1*den);
               s+=roman(5*den);
            }
            else if(rep==9)
            {
                s+=roman(1*den);
                s+=roman(10*den);
            }else
            {
                s+=roman(rep*den);
            }
             
            n=n%den;
            if(l==0)
            {
                break;
            }
             
            l=len(n);
        }
     return s;   
    }
};