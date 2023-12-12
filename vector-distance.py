Solve the following code contest problem: vector-distance. Problem description: Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space..
Currently, the code is 
```
def vector_distance(v1, v2):
    return np.linalg.norm(np.array(v1) - np.array(v2))
``` 
Modify the code as  The issue is that the function is not returning the correct value for the given input. The expected return value is `210.2130843887115`, but the actual return value is `None`.

To fix this, you should use the `math.hypot` function to calculate the Euclidean distance between the two vectors. This function takes two arrays as input and returns the Euclidean distance between them.

Here's an example of how to modify the code:
```
import math

def vector_distance(v1, v2):
    return math.hypot(np.array(v1) - np.array(v2))
```.