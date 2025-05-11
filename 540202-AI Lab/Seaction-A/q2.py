# Write a program for finding the sum of all numbers in a given list

# Input list from user
numbers = list(map(int, input("Enter numbers separated by space: ").split()))

# Calculate sum
total = sum(numbers)

# Output result
print("Sum of the list:", total)
