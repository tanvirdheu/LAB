# Write a program whether an element is a member of list

# Example list
numbers = [10, 20, 30, 40, 50]

# Element to check
element = int(input("Enter the number to search: "))

# Check membership
if element in numbers:
    print(f"{element} is in the list.")
else:
    print(f"{element} is not in the list.")
