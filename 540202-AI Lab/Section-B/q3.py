# AI Lab: Solve Tower of Hanoi Problem

def tower_of_hanoi(n, source, auxiliary, target):
    if n == 1:
        print(f"Move disk 1 from {source} to {target}")
        return
    tower_of_hanoi(n - 1, source, target, auxiliary)
    print(f"Move disk {n} from {source} to {target}")
    tower_of_hanoi(n - 1, auxiliary, source, target)

# Input from user
n = int(input("Enter number of disks: "))

# Call the function
tower_of_hanoi(n, 'A', 'B', 'C')
