/*Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/


class Solution {
public:
    int firstUniqChar(string s) {
        int count[256]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
        }
        int index=-1;
        for(int i=0;i<s.length();i++){
            if(count[s[i]]==1){
                index=i;
                break;
            }
        }
       return index;
    }
};
