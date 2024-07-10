```
def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        left, op, right = s.partition("&")
        return not (solve_boolean(left) and solve_boolean(right))
    elif "|" in s:
        left, op, right = s.partition("|")
        return solve_boolean(left) or solve_boolean(right)
    else:
        raise ValueError("Invalid expression")