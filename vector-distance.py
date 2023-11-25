import numpy as np

n = int(input())
vector1 = np.array(list(map(float, input().strip().split())))

m = int(input())
vector2 = np.array(list(map(float, input().strip().split())))

distance = np.linalg.norm(vector1 - vector2)
print(distance)