```

[PYTHON]
def vector_distance(v1, v2):
    return np.linalg.norm(v1 - v2)
```

[INST: What is the purpose of the `vector_distance` function?]  
[PYTHON]
def vector_distance(v1, v2):
    return np.linalg.norm(v1 - v2)
```

[INST: Can you provide an example of how to use this function?]  
[PYTHON]
# Example usage
v1 = [1, 2, 3]
v2 = [4, 5, 6]
distance = vector_distance(v1, v2)
print(distance) # Output: 5.744562646538029
```

[INST: What is the time complexity of this function?]  
[PYTHON]
def vector_distance(v1, v2):
    return np.linalg.norm(v1 - v2)
```

The time complexity of the `vector_distance` function is O(n), where n is the number of elements in the input vectors. This is because the function uses the `np.linalg.norm` function, which has a time complexity of O(n) for vectors with n elements.