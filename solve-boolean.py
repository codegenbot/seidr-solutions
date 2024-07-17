```
def solve_boolean(expression):
    if expression.strip() == "T":
        return True
    elif expression.strip() == "F":
        return False
    else:
        parts = expression.replace("  ", " ").strip().split()
        result = bool(int(parts[0]))
        for operator in "&|":
            while operator in parts:
                index = parts.index(operator)
                if operator == "&":
                    result &= bool(int(parts[index-1]))
                else:
                    result |= bool(int(parts[index-1]))
                del parts[index]
        return result