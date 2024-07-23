def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '|' in input:
        left, right = input.split('|')
        return solve_boolean(left) or solve_boolean(right)
    else:
        parts = [p.strip() for p in input.split('&')]
        result = solve_boolean(parts[0])
        for p in parts[1:]:
            if '&' in p: 
                p = solve_boolean(p)
            result &= p
        return result