def solve_boolean(expression):
    if expression.lower() == "t":
        return True
    elif expression.lower() == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)

print(solve_boolean("t"))  
print(solve_boolean("f"))  
print(solve_boolean("f&f"))  
print(solve_boolean("f&t"))  
print(solve_boolean("t&f"))  
print(solve_boolean("f&f&t|f|t&f&f|f|t|f&f&t|t&f&f"))