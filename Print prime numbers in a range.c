#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

void findPrimes(int n) {
    std::vector<int> primeNumbers;

    for (int num = 2; num <= n; ++num) {
        if (isPrime(num)) {
            primeNumbers.push_back(num);
        }
    }

    for (int prime : primeNumbers) {
        std::cout << prime << " ";
    }

    std::cout << std::endl;
}

int main() {
    int n;
  
    std::cin >> n;
    findPrimes(n);
    return 0;
}
