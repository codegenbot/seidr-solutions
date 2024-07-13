def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        while "&" in expression or "|" in expression:
            expression = expression.replace("&", " and ").replace("|", " or ")
        return eval(" ".join(["True" if c == "T" else "False" for c in expression]).replace(" True", "1").replace(" False", "0"))