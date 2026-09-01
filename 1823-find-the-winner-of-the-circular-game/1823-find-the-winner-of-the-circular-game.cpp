class Solution {
public:
int find(vector<bool>& person,int n,int index,int k,int person_left)
{
    if(person_left==1)
    {
        for(int i=0;i<n;i++)
        {
            if(person[i]==0)
            return i;
        }
    }

    int kill=(k-1)%person_left;
    while(kill--)
    {
         index=(index+1)%n;

        while(person[index]==1)
        index=(index+1)%n;
    }
    person[index]=1;

    while(person[index]==1)
    {
        index=(index+1)%n;
    }
   return find(person,n,index,k,person_left-1);
}
    int findTheWinner(int n, int k) {
        vector<bool> person(n,0);
        int person_left=n;

        int ans=find(person,n,0,k,person_left);

        return ans+1;
    }
};