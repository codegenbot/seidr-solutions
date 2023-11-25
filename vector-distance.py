import numpy as np

vector1 = np.fromstring(input(), dtype=float, sep=' ')
vector2 = np.fromstring(input(), dtype=float, sep=' ')

distance = np.linalg.norm(vector1 - vector2)
print(distance)