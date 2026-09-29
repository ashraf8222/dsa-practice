//1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num){
        bool even=isEven(num);
        if(even){
            num/=2;
            step++;
        }else{
            num-=1;
            step++;
        }
        }
        return step;
    }
    bool isEven(int n){
        if(n%2==0)
          return true;
        else
          return false;
    }
};