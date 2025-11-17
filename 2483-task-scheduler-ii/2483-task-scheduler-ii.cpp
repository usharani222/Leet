class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long days=1;
        map<int,long long> m;
        if(tasks.size()==1) return 1;
        for(int i=0;i<tasks.size();i++)
        {
            if(m.find(tasks[i])!=m.end())
            {
                long long last=m[tasks[i]]+space+1;
                if(days<last)   days=last;
            }
            m[tasks[i]]=days;
            days++;
        }
        return days-1;
    }
};