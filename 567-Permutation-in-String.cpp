class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int> counts1(26, 0);
        vector<int> counts2(26, 0);

        for(int i=0; i<s1.length(); i++){
            counts1[s1[i] - 'a']++;
            counts2[s2[i] - 'a']++;
        }
        for(int i = s1.length(); i<s2.length(); i++){
            if(counts1 == counts2){
                return true;
            }
            counts2[s2[i - s1.length()] - 'a']--;
            counts2[s2[i] - 'a']++;
        }
        return counts1 == counts2;
    }
};
