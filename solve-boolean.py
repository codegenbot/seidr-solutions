```
def solve_boolean(expression):
    result = True
    while '&' in expression:
        start = 0
        end = 0
        for i in range(len(expression)):
            if expression[i] == '&':
                end = i
            elif expression[i] == '|':
                start = i
                break
        or_parts = expression[:start].split('|')
        result &= all(p != 'F' for p in or_parts)
        expression = expression[end + 1:]
    return all(expression.split('|') != ['F'])