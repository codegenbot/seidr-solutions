def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)


print("Result:", str(solve_boolean("t")))
print("Result:", str(solve_boolean("f")))
print("Result:", not bool(solve_boolean("f&f")))
print("Result:", not bool(solve_boolean("f&t")))
print("Result:", not bool(solve_boolean("t&f")))