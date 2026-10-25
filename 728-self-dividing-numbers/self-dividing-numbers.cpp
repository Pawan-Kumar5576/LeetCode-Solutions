class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int>v;
        for(int i=left;i<=right;i++){
            int n=i;
            bool check=true;

            while(n>0){
                int rem=n%10;
                if(rem == 0 || i%rem != 0){
                    check=false;
                    break;
                }
                n=n/10;
            }
            if(check){
                v.push_back(i);
            }
        }
        return v;


    }
};