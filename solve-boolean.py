def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        result = None
        i = 0
        while i < len(expression):
            if expression[i] == "&":
                if i + 1 < len(expression) and expression[i + 1] == "&":
                    i += 2
                    continue
                if result is None:
                    result = expression[i + 1] == "t"
                else:
                    result &= expression[i + 1] == "t"
                i += 2
            elif expression[i] == "|":
                if i + 1 < len(expression) and expression[i + 1] == "|":
                    i += 2
                    continue
                if result is None:
                    result = expression[i + 1] == "t"
                else:
                    result |= expression[i + 1] == "t"
                i += 2
            elif expression[i].lower() in ["t", "f"]:
                i += 1
        return result