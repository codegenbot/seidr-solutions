import numpy as np

n = int(input()) 
vector1 = np.array(input().split(), dtype=float)

m = int(input())
vector2 = np.array(input().split(), dtype=float)

if len(vector1) != n or len(vector2) != n:
    print("Invalid input. Vectors should have n dimensions.")
else:
    distance = np.linalg.norm(vector1 - vector2)
    print(distance)