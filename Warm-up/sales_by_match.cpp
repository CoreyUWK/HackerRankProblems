/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> map;
    for (int color : ar) {
        ++map[color];
    }
    
    int pairs = 0;
    for (auto itr = map.begin(); itr != map.end(); ++itr) {
        pairs += itr->second / 2;
    }
    
    return pairs;
}
