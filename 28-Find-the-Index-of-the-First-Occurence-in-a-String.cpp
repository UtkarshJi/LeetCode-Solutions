//this is just the strstr function, you might need to make some chnages to make your code run
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return -1;
        }
        int len1= haystack.length();
        int len2= needle.length();
 
        if(len2>len1){
            return -1; 
        }

        for(int i=0; i<len1-len2+1; i++){
            if(haystack.substr(i, len2)==needle){
                return i;
            }
        }
        return -1;
    }
};
