int cache[7000][7000];
int commonChild(string s1, string s2) {
    if (s1.length() != s2.length()) throw "strings of different length";
    
    for (int i = 0; i <= s1.length(); ++i) {
        cache[i][0] = 0;
        cache[0][i] = 0;
    }
    
    for (int row = 1; row <= s1.length(); ++row) {
        for (int col = 1; col <= s2.length(); ++col) {
            if (s1[row - 1] == s2[col - 1]) {
                cache[row][col] = 1 + cache[row - 1][col - 1];
            }
            else {
                cache[row][col] = std::max(cache[row - 1][col], cache[row][col - 1]);
            }
        }
    }
    
    /*cout << endl;
    for (int row = 0; row <= s1.length(); ++row) {
        for (int col = 0; col <= s2.length(); ++col) {
            cout << cache[row][col] << " ";
        }
        cout << endl;
    }*/
    
    return cache[s1.length()][s2.length()];
}
