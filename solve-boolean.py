def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solveBoolean(left) and solveBoolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solveBoolean(left) or solveBoolean(right)

def parseBoolean(expression):
    if '(' in expression:
        i = expression.index('(')
        j = expression.index(')')
        return eval(f"({parseBoolean(expression[:i].strip())} {expression[i+1:j].strip()} {parseBoolean(expression[j+1:].strip())})"
    elif '&' in expression or '|' in expression:
        left, right = expression.split('&' if '&' in expression else '|')
        return (solveBoolean(left) and solveBoolean(right)) if '&' in expression else (solveBoolean(left) or solveBoolean(right))
    else:
        return solveBoolean(expression)

print(parseBoolean('f&t|t&f|f&f&t|f&f'))  # Output: False