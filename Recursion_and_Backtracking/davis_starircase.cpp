// Complete the stepPerms function below.
int stepPerms(int n, const vector<int> &steps, unordered_map<int,int> &hash)
{
    if (n == 0)
    {
        return 1;
    }

    if (hash.find(n) == hash.end())
    {
        int numPerm = 0;
        for (auto step : steps)
        {
            if (n >= step)
            {
                numPerm += stepPerms(n - step, steps, hash);
            }
        }
        hash[n] = numPerm;
    }

    return hash[n];
}

int stepPerms(int n) {
    vector<int> steps = {3, 2, 1};
    unordered_map<int, int> hash;
    return stepPerms(n, steps, hash);
}
