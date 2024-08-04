def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        for op, b in re.findall(r'(T|F)|(&|\\|)T|(&|\\|)F', expression):
            if op == '&':
                return bool(int(b))
            elif op == '|':
                return not bool(int(b))