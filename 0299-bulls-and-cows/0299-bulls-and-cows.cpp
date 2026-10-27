class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> x;
        unordered_map<char,int> y;
        int bulls=0,cows=0;

        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
            }
            else
            {
                x[secret[i]]++;
                y[guess[i]]++;
            }
        }
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]!=guess[i])
            {
                if(y[guess[i]]>0 && x[guess[i]]>0)
                {
                    cows++;
                    y[guess[i]]--;
                    x[guess[i]]--;
                }
            }
        }
            string s="";
            s+=to_string(bulls);
            s+='A';
            s+=to_string(cows);
            s+='B';
            return s;
        }
    
};