
```python
def vector_distance(v1, v2):
    v1 = np.array(v1).reshape(-1)
    v2 = np.array(v2).reshape(-1)
    return np.linalg.norm(v1 - v2)
```