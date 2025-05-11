# AI Lab: Program to Sort a List

# Take input from user
numbers = input("Enter numbers separated by spaces: ")

# Convert to list of integers
num_list = list(map(int, numbers.split()))

# Sort the list
num_list.sort()

# Output the sorted list
print("Sorted list:", num_list)
