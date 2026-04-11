class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map< string, vector<string> > hashmap;

        for(string word: strs) {
            string freq = "00000000000000000000000000";
            for(int i=0; i<word.length(); i++) {
                freq[word[i] - 'a']++;
            }
            hashmap[freq].push_back(word);
        }
        for(auto& pair : hashmap) {
            result.push_back(pair.second);
        }
        return result;
    }
};
