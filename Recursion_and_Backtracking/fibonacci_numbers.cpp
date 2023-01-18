int fibonacci(int n) {
    if (n <= 1)
    {
        return n;
    }
    
    // Complete the function.
    return fibonacci(n - 1) + fibonacci(n - 2);
}
