v_diff = [(a - b) ** 2 for a, b in zip(v1, v2)]
dist = sqrt(sum(v_diff))
print("%.6f" % dist)