# AI Lab: 4-Queen Problem using Backtracking

N = 4

def print_solution(board):
    for row in board:
        print(" ".join(str(cell) for cell in row))
    print()

def is_safe(board, row, col):
    # Check this column on upper rows
    for i in range(row):
        if board[i][col] == 1:
            return False

    # Check upper-left diagonal
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check upper-right diagonal
    for i, j in zip(range(row, -1, -1), range(col, N)):
        if board[i][j] == 1:
            return False

    return True

def solve_n_queens(board, row):
    if row == N:
        print_solution(board)
        return True

    res = False
    for col in range(N):
        if is_safe(board, row, col):
            board[row][col] = 1
            res = solve_n_queens(board, row + 1) or res
            board[row][col] = 0  # backtrack
    return res

# Initialize board
board = [[0 for _ in range(N)] for _ in range(N)]

# Solve the problem
if not solve_n_queens(board, 0):
    print("No solution found.")
