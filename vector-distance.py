import numpy as np

n = int(input("Enter the dimension of the vectors: "))

vector1 = np.array([float(input(f"Enter the {i+1}th element of vector 1: ")) for i in range(n)], dtype=float)
vector2 = np.array([float(input(f"Enter the {i+1}th element of vector 2: ")) for i in range(n)], dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)