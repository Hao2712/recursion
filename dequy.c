#include <stdio.h>

// Hàm đệ quy tính số Fibonacci
int fibonacci(int n) { // 5
    if (n <= 1) { // 0 hoặc 1
        return n; // 0      1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // n = 5; fibonacci(5 - 1) + fibonacci(5 - 2); => 3 + 2 = 5
												// n = 4; fibonacci(4 - 1) + fibonacci(4 - 2); => 2 + 1 = 3
												// n = 3; fibonacci(3 - 1) + fibonacci(3 - 2); => 1 + 1 = 2
												// n = 2; fibonacci(2 - 1) + fibonacci(2 - 2); => 1 + 0 = 1

}
// 5 = 0 1 1 2 3 5

int factorial(int n) { // 1
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1); // 5 * factorial(5 - 1); => 5 * 24 = 120
								 // 4 * factorial(4 - 1); => 4 * 6 = 24
								 // 3 * factorial(3 - 1); => 3 * 2 = 6
								 // 2 * factorial(2 - 1); => 2 * 1 = 2
								 // factorial(2 - 1) = 1;
}

int main() {
    int n;

    // Nhập số nguyên từ người dùng
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Tính và in số Fibonacci
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
	//printf("Factorial: %d", fibonacci(n));
    return 0;
}
