def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '&' in input:
        left, right = input.split('&')
        return bool(int(left) and int(right))
    elif '|' in input:
        left, right = input.split('|')
        return bool(int(left) or int(right))