//9. Palindrome Number
//first approach
class Solution {
public:
    bool isPalindrome(int x) {
        string isPaliDrm,s1;
        int sample=x;
        if(x<0)
        return false;
        if(x==0)
        return true;
        while(sample){
           int digit=sample%10;
           isPaliDrm.push_back(digit+'0');
           sample/=10;
        }
        s1=to_string(x);
        if(isPaliDrm==s1)
         return true;
        else
         return false;
    }
};

//second approach
class Solution {
public:
    bool isPalindrome(int x) {
        long palinDrm=0;
        int sample=x;
        if(x<0)
         return false;
        if(x==0)
         return true;
        while(sample){
            int digit=sample%10;
            palinDrm=palinDrm*10+digit;
            sample/=10;
        }
        if(palinDrm==x)
          return true;
        else
          return false;
    }
};