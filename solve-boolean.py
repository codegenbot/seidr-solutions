def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid Boolean expression")
    elif '&' in input_str:
        return all(c == 'T' for c in input_str)
    elif '|' in input_str:
        return any(c == 'T' for c in input_str)