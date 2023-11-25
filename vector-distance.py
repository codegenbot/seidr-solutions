import numpy as np
import sys

vector1 = np.array(sys.argv[1:], dtype=float)
vector2 = np.array(sys.argv[1:], dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)