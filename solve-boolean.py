def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        parts = expression.split("&")
        return all(eval(part) for part in parts)
    elif "|" in expression:
        parts = expression.split("|")
        return any(eval(part) for part in parts)


print(solve_boolean("t"))
print(solve_boolean("f&f"))
print(solve_boolean("t|f"))