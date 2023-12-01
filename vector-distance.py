import numpy as np

n = int(input())
vector1 = list(map(float, input().split()))
m = int(input())
vector2 = list(map(float, input().split()))

distance = np.linalg.norm(np.array(vector1) - np.array(vector2))
print(distance)