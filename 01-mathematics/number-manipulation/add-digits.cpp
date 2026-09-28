//258. Add Digits
class Solution {
public:
    int addDigits(int num) {
        int samp=0;
        while(num){
            samp+=(num%10);
            num/=10;
        }
        if(samp<10)
        return samp;
        else
        return addDigits(samp);
    }
};