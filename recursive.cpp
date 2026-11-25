#include <iostream>
using namespace std;

// 1. Hitung mundur
void hitungMundur(int n) {
    if (n < 0) return;
    cout << n << " ";
    hitungMundur(n - 1);
}

// 2. Faktorial
long long faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

// 3. Fibonacci
long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "=== 1. Hitung Mundur ===" << endl;
    hitungMundur(5);
    cout << endl;

    cout << "\n=== 2. Faktorial ===" << endl;
    for (int i = 0; i <= 10; i++)
        cout << i << "! = " << faktorial(i) << endl;

    cout << "\n=== 3. Fibonacci ===" << endl;
    for (int i = 0; i <= 10; i++)
        cout << "F(" << i << ") = " << fibonacci(i) << endl;

    return 0;
}
