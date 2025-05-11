# Write a program to determine the Greatest Common Division of two positive integer numbers

# Input from user
a = int(input("Enter first positive integer: "))
b = int(input("Enter second positive integer: "))

# Function to find GCD using Euclidean algorithm
def find_gcd(x, y):
    while y:
        x, y = y, x % y
    return x

# Calculate GCD
gcd = find_gcd(a, b)

# Output result
print("GCD of", a, "and", b, "is:", gcd)
