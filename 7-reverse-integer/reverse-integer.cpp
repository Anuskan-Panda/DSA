class Solution {
public:
    int reverse(int x) {
       long long rev=0,temp;
       bool negative=x<0;
       long long num=x;
       if(num<0)
       {
         num=-num;
       }

       while(num>0)
       {
         temp=num%10;
         rev=(rev*10)+temp;
         num=num/10;
       }

       if(negative)
       {
         rev=-rev;
       }
         if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
     
       return (int)rev;
    }   
};