def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        for op, val in re.findall(r'([|&])\s*(\w)', expression):
            if op == '&':
                result = all
            elif op == '|':
                result = any
            expression = val
            break
        return eval(f'return {result}(True){" and " if op == "&" else " or "}={expression}'')