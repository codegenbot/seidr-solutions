def solve_boolean(expression):
    def evaluate_operator(s, op):
        if s[0] == '(':
            return int(evaluate_expression(s[1:-1]))
        elif s[0] in ['T', 'F']:
            return {'T': 1, 'F': 0}[s[0]]
        else:
            a = evaluate_operator(s[:3], op)
            b = evaluate_operator(s[4:], op)
            return op == '&' and a & b or op == '|' and a | b

    def evaluate_expression(expression):
        result_str = ''
        parsing = True
        for char in expression[::-1]:
            if char in ['T', 'F']:
                if parsing:
                    result_str += char
                else:
                    return str(evaluate_operator(result_str + char, '|'))
            elif char in ['|', '&']:
                if char == '&':
                    result_str += '& '
                else:
                    result_str += '| '
        return str(evaluate_operator(result_str, '|'))

    return int(evaluate_expression(expression))