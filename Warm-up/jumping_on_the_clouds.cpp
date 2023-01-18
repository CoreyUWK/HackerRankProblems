/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c) {
    int idx = 0;
    int jumps = 0;
    while (idx < c.size() - 1) {
        if (c[idx + 2] == 0) {
            idx += 2;
            ++jumps;
        }
        else if (c[idx + 1] == 0) {
            idx += 1;
            ++jumps;
        }
    }
    return jumps;
}