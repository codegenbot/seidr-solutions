```
# Write a function to calculate the Euclidean distance between two vectors in n-dimensional space
def euclidean_distance(v1, v2):
    # Calculate the square of the Euclidean distance
    dist_sq = sum((vi - vj) ** 2 for vi, vj in zip(v1, v2))
    # Return the square root of the distance
    return math.sqrt(dist_sq)
```
This code defines a function called `euclidean_distance` that takes two vectors as input and returns their Euclidean distance between them. The function uses a generator expression to calculate the sum of the squares of the differences between the corresponding elements of the two vectors, and then takes the square root of that sum to get the final distance.

The function is designed to be used with any number of dimensions, as long as both vectors have the same number of elements. The `zip` function is used to iterate over the corresponding elements of the two vectors simultaneously.