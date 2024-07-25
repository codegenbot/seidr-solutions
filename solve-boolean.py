def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, val in re.findall(r'([|&])\s*(T|F)', expression):
            if op == '&':
                result &= (val == 'T')
            elif op == '|':
                result |= (val == 'T')
        return result