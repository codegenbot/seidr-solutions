def solve_boolean(expression):
    while '&' in expression or '|' in expression:
        start = 0
        end = 0
        for i, char in enumerate(expression):
            if char == '&':
                start = i
            elif char == '|':
                end = i
                break
        result = eval(f"({expression[:start]}) & ({expression[start+1:end]})")
        expression = f"({str(bool(result)).lower()}){expression[end:]}".replace("true", "1").replace("false", "0")
    if '&' in expression:
        left, right = expression.split('&')
        return bool(eval(f"({left}) & ({right})"))
    elif '|' in expression:
        return any(solve_boolean(arg) for arg in expression.split('|'))
    else:
        return eval(expression.replace("True", "1").replace("False", "0"))