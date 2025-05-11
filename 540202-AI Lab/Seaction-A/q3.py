# Write a program for finding the largest and smallest element in a given list

# Input list from user
numbers = list(map(int, input("Enter numbers separated by space: ").split()))

# Find largest and smallest
largest = max(numbers)
smallest = min(numbers)

# Output results
print("Largest number:", largest)
print("Smallest number:", smallest)
