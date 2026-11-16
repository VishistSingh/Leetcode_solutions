class Solution {
public:
void make(string temp,string &ans)
{
    int sum=0;
    for(char c: temp)
    {
        sum+=c-'0';
    }
    ans+=to_string(sum);
}
    string digitSum(string s, int k) {
        string ans;
       string temp;
        while(s.size()>k)
        {
            ans="";
            int n=s.size();
        for(int i=0;i<n;i+=k)
        {
            temp=s.substr(i,k);
            make(temp,ans);
            }
        s=ans;
    }
    return s;
    }
};