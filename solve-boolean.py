def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    expression = ''.join(bool_map.get(c, c) for c in expression)
    
    while '&' in expression:
        start = 0
        end = 0
        for i in range(len(expression)):
            if expression[i] == '&':
                end = i
            elif expression[i] == '|':
                start = i
                break
        result = all(bool_map.get(p, p) != 'F' for p in expression[:start].split('|'))
        while '&' in expression[end:]:
            start = 0
            end = 0
            for i in range(len(expression[end:])):
                if expression[i + end].get == '&':
                    end = i
                elif expression[i + end] == '|':
                    start = i
                    break
                result &= all(bool_map.get(p, p) != 'F' for p in expression[end:end + start].split('|'))
        expression = expression[end + start:]
    
    return all(bool_map.get(p, p) != 'F' for p in expression.split('|'))