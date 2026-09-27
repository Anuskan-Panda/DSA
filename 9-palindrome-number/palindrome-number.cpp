class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
           long long pal=0,temp;
           long long r=x;

           while(x>0)
           {
               temp=x%10;
               pal=(pal*10)+temp;
               x=x/10;
           }
           
           if(r!=pal)
           {
            return false;
           }
           return true;
    }
};