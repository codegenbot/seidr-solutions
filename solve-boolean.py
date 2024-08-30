def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, bit in zip(['&', '|'], [expression[i:i+1] for i in range(len(expression))]):
            if op == '&':
                result &= (bit == 'T')
            elif op == '|':
                result |= (bit == 'T')
        return result