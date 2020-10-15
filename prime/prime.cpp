
bool isPrime(int n)
{

    int i;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        return false;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    }

    return true;
}