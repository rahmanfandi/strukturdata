# 1. Hitung mundur
def hitung_mundur(n):
    if n < 0:
        return
    print(n, end=" ")
    hitung_mundur(n - 1)

# 2. Faktorial
def faktorial(n):
    if n <= 1:
        return 1
    return n * faktorial(n - 1)

# 3. Fibonacci
def fibonacci(n):
    if n <= 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)


if __name__ == "__main__":
    print("=== 1. Hitung Mundur ===")
    hitung_mundur(5)
    print()

    print("\n=== 2. Faktorial ===")
    for i in range(11):
        print(f"{i}! = {faktorial(i)}")

    print("\n=== 3. Fibonacci ===")
    for i in range(11):
        print(f"F({i}) = {fibonacci(i)}")
