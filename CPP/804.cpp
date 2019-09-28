// Unique Morse Code Words
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCodes[] = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        std::set<string> mySet;
        for(int i=0;i<words.size();i++)
        {
            std::string word = words[i];
            
            string morseCode="";
            for(int j= 0 ; j< word.size();j++)
                morseCode+=morseCodes[word[j]-'a'];
            mySet.insert(morseCode);
        }
        return mySet.size();
    }
};