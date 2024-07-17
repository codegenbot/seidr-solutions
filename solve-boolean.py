def solveBoolean(boolExp):
    if boolExp == "T":
        return True
    elif boolExp == "F":
        return False
    elif "&" in boolExp and "|" in boolExp:
        raise ValueError("Invalid expression")
    else:
        try:
            a, op, b = boolExp.split()
            a = a.strip().lower() == "t"
            b = b.strip().lower() == "t"
            if op == "&":
                return a and b
            elif op == "|":
                return a or b
            else:
                raise ValueError("Invalid operation")
        except ValueError:
            return False