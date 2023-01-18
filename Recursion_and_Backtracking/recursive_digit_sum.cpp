int superDigit(string super)
{
    if (super.size() <= 1)
    {
        return (int)(super[0] - '0');
    }

    int newSuper = 0;
    for (int i = 0; i < super.size(); ++i)
    {
        newSuper += (int)(super[i] - '0');
    }
    return superDigit(to_string(newSuper));
}
// Complete the superDigit function below.
int superDigit(string n, int k) {
    int super = superDigit(n) * k;
    return superDigit(to_string(super));
}   
