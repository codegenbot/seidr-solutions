import numpy as np

n = int(input())

vector1 = np.array([float(input()) for _ in range(n)], dtype=float)
vector2 = np.array([float(input()) for _ in range(n)], dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)