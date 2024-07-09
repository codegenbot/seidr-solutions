```
def solve_boolean(expression):
    while '(' in expression:
        start = 0
        end = 0
        for i, char in enumerate(expression):
            if char == '(':
                start = i
            elif char == ')':
                end = i
                break
        if expression[start+1:end].count('&') == 0: 
            result = bool(eval(expression[start+1:end]))
        else: 
            temp = expression[start+1:end].split('&')
            temp_result = True
            for i in temp:
                if eval(i):
                    temp_result = False
                    break
            result = temp_result

        expression = expression[:start] + str(result) + expression[end+1:]
    return eval(f"({'+'.join(str(solve_boolean(arg)) if '()' in arg else str(arg) for arg in expression.split('|'))})")