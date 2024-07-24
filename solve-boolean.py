def solve(input_str):
    def evaluate_bool(exp):
        if exp == 'T':
            return True
        elif exp == 'F':
            return False
        elif '&' in exp:
            a, b = map(evaluate_bool, exp.split('&'))
            return a and b
        elif '|' in exp:
            a, b = map(evaluate_bool, exp.split('|'))
            return a or b

    return evaluate_bool(input_str)