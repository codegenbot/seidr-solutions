def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        while '&' in expression or '|' in expression:
            if '&' in expression and '|' in expression:
                left, middle, right = expression.split('&')
                expression = middle.replace('|', ' & |') + '&' + right
            else:
                if '&':
                    left, right = expression.split('&')
                    expression = str(solve_boolean(left)) + ' & ' + str(solve_boolean(right))
                else:
                    left, right = expression.split('|')
                    expression = str(solve_boolean(left)) + ' | ' + str(solve_boolean(right))
        return (str(solve_boolean(expression[1:-1])) == 'True') if expression[0] == '&' else (str(solve_boolean(expression[1:-1])) == 'False')