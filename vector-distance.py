
```
import math

def distance(v1, v2):
    return math.sqrt(sum((x1 - x2)**2 for x1, x2 in zip(v1, v2)))
```