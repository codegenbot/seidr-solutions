import numpy as np

vector1 = np.array(input().strip().split(), dtype=float)
vector2 = np.array(input().strip().split(), dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)