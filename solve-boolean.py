```
def solve_boolean(expression):
    while '&' in expression and '|' in expression:
        expression = expression.replace('&|', '&&|').replace('|&', '|&&')
    if '(' not in expression and ')' not in expression:  
        return True if expression == 'T' else False
    elif '&' in expression:
        left, right = expression.split(' & ')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split(' | ')
        return solve_boolean(left) or solve_boolean(right)

def solve_boolean_nested(expression):
    if '(' not in expression and ')' not in expression:  
        return True if expression == 'T' else False
    elif '&' in expression or '|' in expression:
        for operator in '&|':
            while operator in expression:
                expression = expression.replace(f"({operator})","((" + operator + "))")
        left, right = expression.split(' (')
        left = left.strip().split(')')
        return solve_boolean(' | '.join(left[0].strip().split()) and ' | '.join(map(solve_boolean, [x.strip() for x in left[1:]]) ) )

print(solve_boolean_nested("f|f&t|t&t|t&t&f&t&t|t&t&t&f|f"))