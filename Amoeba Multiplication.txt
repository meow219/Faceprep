#include <iostream>

int calculateAmoebaSize(int month) {
    if (month == 1 || month == 2) {
        return month - 1;
    }
    
    int a = 0, b = 1, size = 0;

    for (int i = 3; i <= month; i++) {
        size = a + b;
        a = b;
        b = size;
    }

    return size;
}

int main() {
    int month;
    std::cout << "Enter the month: ";
    std::cin >> month;

    if (month <= 0) {
        std::cout << "Invalid input." << std::endl;
    } else {
        int size = calculateAmoebaSize(month);
        std::cout << "Amoeba size in month " << month << ": " << size << std::endl;
    }

    return 0;
}
