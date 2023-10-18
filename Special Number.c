#include <iostream>

bool isSpecial(int num) {
    int sumOfDigits = 0;
    int productOfDigits = 1;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        temp /= 10;
    }

    return (sumOfDigits + productOfDigits) == num;
}

int main() {
    int m, n;
    
   
    std::cin >> m >> n;

    if (m < 10 || n > 99 || m > n) {
        std::cout << "Invalid input range." << std::endl;
        return 1;
    }

    for (int num = m; num <= n; num++) {
        if (isSpecial(num)) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
