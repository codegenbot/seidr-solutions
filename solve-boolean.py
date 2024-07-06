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
        result &= all(part != 'F' for part in or_parts)
        expression = expression[end + 1:]
    return all(part != 'F' for part in expression.split('|'))