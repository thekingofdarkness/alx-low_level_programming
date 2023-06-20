#include <iostream>

void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return;
    }

    for (int i = 0; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << (n * i) << std::endl;
    }
}

int main() {
    int num;
    std::cout << "Enter a number between 0 and 15: ";
    std::cin >> num;
    print_times_table(num);
    return 0;
}
