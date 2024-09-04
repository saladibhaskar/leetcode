class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obs) {
        vector<int>pos={0,0};
        int n=commands.size();
        int i=0;
        int mv=1;
        int max=0;
        map<vector<int>,int>obstacles;
        for(int i=0;i<obs.size();i++)obstacles[obs[i]]+=1;
        while(i<n)
        {
            if(commands[i]==-1)
            {
                if(mv==4)mv=1;
                else mv++;
            }
            else if(commands[i]==-2)
            {
                if(mv==1)mv=4;
                else mv--;
            }
            else
            {
                int steps=commands[i];
                while(steps!=0)
                {
                    if(mv==1)
                    {
                        vector<int>tar={pos[0],pos[1]+1};
                        if(obstacles.find(tar)!=obstacles.end())
                        {
                            break;
                        }else
                        {
                            pos[1]+=1;
                            steps-=1;
                        }
                    }else if(mv==2)
                    {
                        vector<int>tar={pos[0]+1,pos[1]};
                        if(obstacles.find(tar)!=obstacles.end())
                        {
                            break;
                        }else
                        {
                            pos[0]+=1;
                            steps-=1;
                        }
                    }else if(mv==3)
                    {
                        vector<int>tar={pos[0],pos[1]-1};
                        if(obstacles.find(tar)!=obstacles.end())
                        {
                            break;
                        }else
                        {
                            pos[1]-=1;
                            steps-=1;
                        }
                    }
                    else if(mv==4)
                    {
                        vector<int>tar={pos[0]-1,pos[1]};
                        if(obstacles.find(tar)!=obstacles.end())
                        {
                            break;
                        }else
                        {
                            pos[0]-=1;
                            steps-=1;
                        }
                    }
                }
            }
            if(pos[0]*pos[0]+pos[1]*pos[1]>max)max=pos[0]*pos[0]+pos[1]*pos[1];
            cout<<pos[0]<<" "<<pos[1]<<" $";
            i++;
        }   
        //cout<<pos[0]<<" "<<pos[1];
        return max;
    }

};