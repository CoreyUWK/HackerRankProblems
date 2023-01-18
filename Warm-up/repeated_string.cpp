/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    long n_local = s.length();
    if (n < s.length()) n_local = n; 
    
    long countA = 0;
    for (int i = 0; i < n_local; ++i) {
        if (s[i] == 'a') ++countA;
    }
    
    if (n_local < n) {
        long divInTo = (n / s.length());
        long rem = n % s.length();
        
        countA *= divInTo;
        for (int i = 0; i < rem; ++i) {
            if (s[i] == 'a') ++countA;  
        }
    }
        
    return countA;
}