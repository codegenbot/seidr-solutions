def solve_boolean(expression):
    while '&' in expression and '|' in expression:
        expression = expression.replace('|&', '| &&').replace('&|', ' & |')
    if '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)

print(solve_boolean('f|f&t|t&t|t&t&f&t&t|t&t&t&f|f'))