```
def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '&' in input:
        while '&' in input:
            left, right = input.split('&')
            input = left + ' and ' + right
        terms = [t.strip() for t in input.split(' and ')]
        return all(solve_boolean(t) for t in terms)
    elif '|' in input:
        while '|' in input:
            left, right = input.split('|')
            input = left + ' or ' + right
        terms = [t.strip() for t in input.split(' or ')]
        return any(solve_boolean(t) for t in terms)