class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n>0){
            int ld=n%10;
            product=product*ld;
            sum=sum+ld;
            n=n/10;
        }
        return product-sum;
    }
};