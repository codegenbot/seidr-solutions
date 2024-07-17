def solve_boolean(expression):
    expression = expression.lower() 
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&", 1)  # Split at most once
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|", 1)  # Split at most once
        return solve_boolean(left) or solve_boolean(right)

print(solve_boolean("f&f&t|f|t&f&f|f|t|f&f&t|t&f&f"))