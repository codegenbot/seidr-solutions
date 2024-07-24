def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif expression[0] in ['|', '&']:
        left = ''
        for i, c in enumerate(expression):
            if c in ['|', '&']:
                break
            left += c
        right = expression[i+1:]
        return solve_boolean(left) and (solve_boolean(right) or True)