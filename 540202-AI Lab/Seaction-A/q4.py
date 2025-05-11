# Write a program to count number of elements in a list

# Input list from user
numbers = list(map(int, input("Enter numbers separated by space: ").split()))

# Count elements
count = len(numbers)

# Output result
print("Number of elements in the list:", count)
