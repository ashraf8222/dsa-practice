//125. Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> reverse_ans,ans;
        for(int i=0,j=s.size()-1;i<s.size();i++,j--){
            if(isalnum(s[i])) ans.push_back( tolower(s[i])) ;
            if(isalnum(s[j])) reverse_ans.push_back( tolower(s[j]) );
        }
        return ans==reverse_ans;
    }
};