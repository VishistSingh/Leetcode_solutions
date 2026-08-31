class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;
        long long r=pow(c,0.5);

        while(left<=r)
        {
            if(left*left + r*r==c)
            return true;

            else if(left*left + r*r< c)
            left=left+1;

            else
            r=r-1;
        }
        return false;
    }
};