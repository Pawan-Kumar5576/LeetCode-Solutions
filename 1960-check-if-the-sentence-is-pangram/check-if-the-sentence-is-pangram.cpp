class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool>position(26,false);
        for(int i=0;i<s.length();i++){
            position[s[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(position[i]==false){
                return false;
            }
        }
        return true;

    }
};