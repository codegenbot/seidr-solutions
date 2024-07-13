def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        return eval(
            "".join(["True" if c == "T" else "False" for c in expression])
            .replace("&", "and")
            .replace("|", "or")
        )