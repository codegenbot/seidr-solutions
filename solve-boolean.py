def solve_boolean(expression):
    return eval(f"({('T' if c == 'T' else 'False') for c in expression})")