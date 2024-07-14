```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        return False
    else:
        left = 0
        for i, c in enumerate(expression):
            if c in '&|':
                right = i
                break
        return (expression[:left] == 'T' or expression[:left] == '') and eval(f'True if {"&" if expression[left] == "&" else "|"}.join(map(lambda x: str(x) != "F", list(expression[left+1:right]))), {}, {})