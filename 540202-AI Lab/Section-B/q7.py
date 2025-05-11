# AI Lab: Hill Climbing Algorithm Implementation

import random

# Objective function
def f(x):
    return -x**2 + 10*x

# Hill climbing function
def hill_climb(start_x, step_size=0.1, max_iterations=1000):
    current_x = start_x
    current_value = f(current_x)

    for _ in range(max_iterations):
        # Try two neighboring solutions
        left = current_x - step_size
        right = current_x + step_size

        left_value = f(left)
        right_value = f(right)

        # Choose the better direction
        if left_value > current_value:
            current_x = left
            current_value = left_value
        elif right_value > current_value:
            current_x = right
            current_value = right_value
        else:
            # Local maximum reached
            break

    return current_x, current_value

# Initial random point between 0 and 10
start = random.uniform(0, 10)

# Run the algorithm
result_x, result_value = hill_climb(start)

print(f"Starting point: x = {start:.2f}")
print(f"Local maximum at x = {result_x:.4f}, f(x) = {result_value:.4f}")
