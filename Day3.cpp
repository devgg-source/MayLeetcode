/*Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count1[26]={0},count2[26]={0};
        for(int i=0;i<ransomNote.length();i++){
            count1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            count2[magazine[i]-'a']++;
        }
        int m=1;
        for(int i=0;i<26;i++){
            if(count2[i]<count1[i]){
                m=0;
                break;
            }
        }
        if(m==1)
            return true;
        else
            return false;
    }
};
