def solve(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid expression")
    result = bool(solve(input_str.split('&')[0]))
    for expr in input_str.split('&')[1:]:
        result = result and bool(solve(expr))
    if '&' not in input_str:
        return result
    result = result or bool(solve(input_str.split('|')[0]))
    for expr in input_str.split('|')[1:]:
        result = result or bool(solve(expr))
    return result