def solve_boolean(input_string):
    if input_string == 'T':
        return True
    elif input_string == 'F':
        return False
    elif '&' in input_string:
        return eval(' & '.join(map(lambda x: 'True' if x == 'T' else 'False', input_string)))
    elif '|' in input_string:
        return eval(' | '.join(map(lambda x: 'True' if x == 'T' else 'False', input_string)))