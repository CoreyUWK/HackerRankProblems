long substrCount(int n, string s) {
    int subStrCount = 0;
    int start = 0;
    int changeIndex = 0;
    
    // Set up tuples
    vector<pair<char, int>> tuples;
    for (int i = 0, index=0; i < s.length(); ++i) {            
        if (i == 0 || s[i] != s[i-1]) {
            tuples.push_back({s[i], 1});
        }
        else {
            ++(tuples[tuples.size() - 1].second);
        }
    }
    
    /*for (auto pair : tuples) {
        cout << "(" << pair.first << "," << pair.second << ")";
    }
    cout << endl;*/
    
    for (int i = 0; i < tuples.size(); ++i) {
        // Add each character and their multiple same character combinations
        for (int repeat = tuples[i].second; repeat > 0; --repeat) {
            subStrCount += repeat;
        }
        
        // Add each of one pattern
        if (i + 2 < tuples.size() && tuples[i+1].second == 1 &&
            tuples[i + 2].first == tuples[i].first) {
            subStrCount += std::min(tuples[i].second, tuples[i + 2].second);
        }
        //cout << "i:" << i << " count:" << subStrCount << endl;
    }
    
    return subStrCount;
}
