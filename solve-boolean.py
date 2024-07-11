```

    def solve(expression):
        expression = expression.upper()
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            left, right = expression.split('&')
            return solve(left) and solve(right)
        elif '|' in expression:
            left, right = expression.split('|')
            return solve(left) or solve(right)

    expression = input()
    while 'T' in expression or 'F' in expression:
        if 'T' in expression:
            expression = expression.replace('T', '')
        else:
            expression = expression.replace('F', '')

    print("Result:", "True" if solve(expression) else "False")