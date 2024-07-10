```
def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s or "|" in s:
        op, *operands = s.split("&" if "&" in s else "|")
        for operand in operands:
            while "&" in operand or "|" in operand:
                operand = solve_boolean(operand)
        return bool(op) and all(solve_boolean(x) for x in operands)