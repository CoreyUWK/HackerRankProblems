// Complete the primality function below.
string primality(int n) {
    if (n <= 1) return "Not prime";
    if (n <= 3) return "Prime";
    if (n % 2 == 0 || n % 3 == 0) return "Not prime";
    
    int end = sqrt(n);
    for (int i = 4; i <= end; ++i) {
        if (n % i == 0) return "Not prime";
    }
    
    return "Prime";
}
