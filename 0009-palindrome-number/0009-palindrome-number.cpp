class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long ans=0,temp=x;;
        while(x>0)
        {
            ans=ans*10+x%10;
            x/=10;
        }    
        return ans==temp;
    }
};