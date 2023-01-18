string isValid(string s) {
    unordered_map<char,int> map;   
    for (char c : s) {
        ++map[c];
    }
    
    int firstFreq = map[s[0]];
    bool oneDiff = false;
    for (auto pair : map) {
        int diff = abs(pair.second - firstFreq);
        if (diff == 0) {
            continue;
        }
        else if ( (pair.second == 1 || diff == 1) && !oneDiff) {
            oneDiff = true;
        }
        else {
            return "NO";
        }
    }
    return "YES";
}
