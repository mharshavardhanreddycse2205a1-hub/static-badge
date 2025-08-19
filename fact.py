def factorial(n):
    if n == 0:
        return 1
    fact = 1
    for i in range(1, n+1):
        fact *= i
    return fact

num = 5
print(f"Factorial of {num} is {factorial(num)}")
