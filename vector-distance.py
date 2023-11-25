import numpy as np

n = int(input("Enter the dimension: "))

vector1 = np.array([float(input(f"Enter value {i} for vector1: ")) for i in range(n)], dtype=float)
vector2 = np.array([float(input(f"Enter value {i} for vector2: ")) for i in range(n)], dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)