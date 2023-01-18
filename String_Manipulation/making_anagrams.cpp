int makeAnagram(string a, string b) {
    int numDelete = 0;
    unordered_map<char, int> map;
    
    // Create Hashmap
    for (char c : a) {
        ++map[c];
    }
    
    // Check if any characters is string b not in string a
    for (char c : b) {        
        if (map.find(c) == map.end()) {
            ++numDelete;
        }
        else {
            --map[c];
        }
    }
    
    // Check if any not found in map
    for (auto pair : map) {
        numDelete += abs(pair.second);
    }
    
    return numDelete;
}
