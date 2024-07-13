```
def solve_boolean(expression):
    def eval_bool(bool_str):
        result = True
        for char in bool_str:
            if char == '&':
                result &= (bool_str[0] == 'T')
            elif char == '|':
                result |= (bool_str[0] == 'T')
            bool_str = bool_str[1:]
        return result

    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        return eval_bool(expression)