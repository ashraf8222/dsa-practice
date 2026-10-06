//2894. Divisible and Non-divisible Sums Difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
            int sum=(n*(n+1)/2);
            int samp=0;
            int i=m;
            while(i<=n){
                samp+=i;
                i+=m;
            }
            return sum-(samp*2);
    }
};