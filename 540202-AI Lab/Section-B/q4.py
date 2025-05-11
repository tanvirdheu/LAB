# AI Lab: Solve Traveling Salesman Problem (Brute-Force)

from itertools import permutations

# Distance matrix (example with 4 cities)
# Replace this matrix with your own distances
graph = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

# Number of cities
n = len(graph)

# Generate all possible tours starting from city 0
cities = list(range(1, n))
min_cost = float('inf')
best_path = []

for perm in permutations(cities):
    current_path = [0] + list(perm) + [0]
    current_cost = 0
    for i in range(len(current_path) - 1):
        current_cost += graph[current_path[i]][current_path[i + 1]]
    if current_cost < min_cost:
        min_cost = current_cost
        best_path = current_path

# Output result
print("Minimum cost:", min_cost)
print("Best path:", ' -> '.join(map(str, best_path)))
