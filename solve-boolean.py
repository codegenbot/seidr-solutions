def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval(
            " ".join(map(lambda x: f"True" if x == "T" else "False", list(expression)))
        )
        return result


expression = input()
print(solve_boolean(expression))