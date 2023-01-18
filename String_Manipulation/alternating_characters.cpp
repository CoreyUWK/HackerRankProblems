int alternatingCharacters(string s) {
    int numDelete = 0;
    for (int i = 0; i < s.length();) {
        int index = i + 1;
        while(s[i] == s[index]) ++index;
        numDelete += (index - (i + 1));
        i = index;
    }
    return numDelete;
}