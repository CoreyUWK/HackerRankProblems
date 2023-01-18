/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int count = 0;
    int altiude = 0;
    for (int istep=0; istep < path.length(); ++istep) {
        char step = path[istep];
        int prevAltitude = altiude;
        if (step == 'U') ++altiude;
        else if (step == 'D') --altiude;
        
        if (prevAltitude == 0 && altiude < 0) {
            ++count;
        }
    }
    
    return count;
}