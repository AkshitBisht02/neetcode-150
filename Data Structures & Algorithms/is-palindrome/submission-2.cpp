class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        int len=s.length();
        for(int i=0;i<len;i++){
            if((s[i]>=65 && s[i]<=90 )  || (s[i]-'0')>=0 && (s[i]-'0'<=9)){
                a+=s[i];
            }
            else if (s[i]>=97 && s[i]<=122 ){
                a+=s[i]-32;
            }
        }
        string b=a;
        reverse(a.begin(),a.end());
        if(a==b) return true;
        return false;
    }
};
