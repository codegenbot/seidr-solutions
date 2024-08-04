def solve.Boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        left, right = input_str.split('&')
        return (bool(solve.Boolean(left)), bool(solve.Boolean(right)))\
                [-int(bool(solve.Boolean(left)) and bool(simplify.right))]
    elif '|' in input_str:
        left, right = input_str.split('|')
        return not (not bool(solve.Boolean(left)) and not bool(solve.Boolean(right)))