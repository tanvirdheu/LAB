# AI Lab: Solve 8-Puzzle Problem using A* Search with Manhattan Distance

from heapq import heappush, heappop

# Goal state
goal_state = [[1,2,3],
              [4,5,6],
              [7,8,0]]

# Heuristic: Manhattan Distance
def manhattan(state):
    distance = 0
    for i in range(3):
        for j in range(3):
            val = state[i][j]
            if val != 0:
                x, y = divmod(val - 1, 3)
                distance += abs(x - i) + abs(y - j)
    return distance

# Check if goal is reached
def is_goal(state):
    return state == goal_state

# Find position of 0 (empty tile)
def find_zero(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j

# Generate possible moves
def get_neighbors(state):
    x, y = find_zero(state)
    directions = [(-1,0), (1,0), (0,-1), (0,1)]
    neighbors = []
    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        if 0 <= nx < 3 and 0 <= ny < 3:
            new_state = [row[:] for row in state]
            new_state[x][y], new_state[nx][ny] = new_state[nx][ny], new_state[x][y]
            neighbors.append(new_state)
    return neighbors

# A* Algorithm
def solve_puzzle(start_state):
    open_list = []
    heappush(open_list, (manhattan(start_state), 0, start_state, []))
    visited = set()

    while open_list:
        est_cost, g, current, path = heappop(open_list)
        state_tuple = tuple(tuple(row) for row in current)
        if state_tuple in visited:
            continue
        visited.add(state_tuple)

        if is_goal(current):
            return path + [current]

        for neighbor in get_neighbors(current):
            if tuple(tuple(row) for row in neighbor) not in visited:
                heappush(open_list, (g + 1 + manhattan(neighbor), g + 1, neighbor, path + [current]))

    return None

# Input from user (optional)
start_state = [
    [1, 2, 3],
    [4, 0, 6],
    [7, 5, 8]
]


# Solve
solution = solve_puzzle(start_state)

# Output
if solution:
    print("Steps to solve the puzzle:")
    for step in solution:
        for row in step:
            print(row)
        print()
else:
    print("No solution found.")
