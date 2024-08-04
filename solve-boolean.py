def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        for op in ['&', '|']:
            if op in expression:
                left, right = expression.split(op)
                if left == 'T':
                    left = True
                else:
                    left = False
                if right == 'T':
                    right = True
                else:
                    right = False
                return left and right if op == '&' else left or right