def solve_boolean(expression):
    def eval_expression(s):
        if s[0] in ['T', 'F']:
            return {'T': True, 'F': False}[s[0]]
        elif s[0] == '&':
            a = eval_expression(s[2:])
            return a and eval_expression(s[5:])
        else:
            a = eval_expression(s[1:])
            return a or eval_expression(s[4:])

    result_str = ''
    parsing = True
    for char in expression[::-1]:
        if char in ['T', 'F']:
            if parsing:
                result_str += char
            else:
                return eval_expression(result_str + char)
        elif char in ['|', '&']:
            if char == '&':
                result_str += '& '
            else:
                result_str += '| '
    return eval_expression(result_str)