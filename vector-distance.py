import numpy as np

n = int(input())
vector1 = np.fromstring(input().strip(), dtype=float, sep=' ')

m = int(input())
vector2 = np.fromstring(input().strip(), dtype=float, sep=' ')

distance = np.linalg.norm(vector1 - vector2)
print(distance)