```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    ops = []
    res = None
    while expression:
        if expression.startswith('T|'):
            res, expression = True, expression[2:]
        elif expression.startswith('F|'):
            res, expression = False, expression[2:]
        elif expression.startswith('|T&'):
            ops.append(('OR', 'AND'))
            expression = '|T&' + expression[3:]
        elif expression.startswith('|F&'):
            ops.append(('OR', 'AND'))
            expression = '|F&' + expression[3:]
        elif '&' in expression:
            op, expression = '&', expression[:expression.index('&')]
            while '|' in expression:
                op1, op2 = '|', expression[:expression.index('|')]
                if op1 == '|':
                    ops.append(('OR', 'AND'))
                else:
                    ops.append(('AND', 'OR'))
                expression = op2
            ops.append((op, expression))
        elif '|' in expression:
            op, expression = '|', expression[:expression.index('|')]
            while '&' in expression:
                op1, op2 = '&', expression[:expression.index('&')]
                if op1 == '&':
                    ops.append(('AND', 'OR'))
                else:
                    ops.append(('OR', 'AND'))
                expression = op2
            ops.append((op, expression))
        elif expression.startswith('T'):
            res = True
            expression = ''
        elif expression.startswith('F'):
            res = False
            expression = ''

    while ops:
        op, expression = ops.pop()
        if op == 'OR':
            if res and solve_boolean(expression):
                return True
            elif not res and not solve_boolean(expression):
                return False
        else:
            if res and not solve_boolean(expression):
                return False
            elif not res and solve_boolean(expression):
                return True

    return res