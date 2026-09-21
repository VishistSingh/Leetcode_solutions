class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> win;
        vector<int> loss;

        unordered_map<int,int> mp(0); 
        for(int i=0;i<matches.size();i++)
        {
                int lost=matches[i][1];
                mp[lost]++;
        }
        
        for(int i=0;i<matches.size();i++)
        {
            int winner=matches[i][0];
            int looser=matches[i][1];

            if(mp.find(winner)==mp.end())
            {
                win.push_back(winner);
                mp[winner]=2;
            }
            if(mp[looser]==1)
            loss.push_back(looser);
        }
        sort(loss.begin(),loss.end());
        sort(win.begin(),win.end());

        return {win,loss};
    }
};