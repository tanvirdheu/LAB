# AI Lab: Union and Intersection of Two Lists

# Input two lists from user
list1 = list(map(int, input("Enter elements of first list (space-separated): ").split()))
list2 = list(map(int, input("Enter elements of second list (space-separated): ").split()))

# Convert lists to sets
set1 = set(list1)
set2 = set(list2)

# Find Union and Intersection
union_result = list(set1.union(set2))
intersection_result = list(set1.intersection(set2))

# Output results
print("Union:", union_result)
print("Intersection:", intersection_result)
