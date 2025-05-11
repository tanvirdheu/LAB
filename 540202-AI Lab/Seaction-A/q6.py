# AI Lab: Reverse a List (User Input)

# Take list input from user
numbers = list(map(int, input("Enter list elements separated by space: ").split()))

# Reverse the list
reversed_list = numbers[::-1]

# Output result
print("Reversed list:", reversed_list)
