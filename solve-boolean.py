def solve_boolean(expression):
    expression = expression.replace(' | ', '|').replace('&', ' & ')
    def recursive_eval(tokens):
        while '(' in tokens:
            start = tokens.index('(')
            end = tokens.index(')')
            sub_expression = ' '.join(tokens[start+1:end])
            result = eval(sub_expression, {'T': True, 'F': False})
            tokens = tokens[:start] + [str(result)] + tokens[end+1:]
        i = 0
        while i < len(tokens):
            token = tokens[i]
            if token == 'T':
                return True
            elif token == 'F':
                return False
            elif token in ['|', '&']:
                operator = token
                j = i + 1
                while j < len(tokens) and tokens[j] not in ['|', '&']:
                    j += 1
                if operator == '&':
                    result = all(eval(str(t), {'T': True, 'F': False}) for t in tokens[i+1:j])
                else:
                    result = any(eval(str(t), {'T': True, 'F': False}) for t in tokens[i+1:j])
                return result
            i += 1

    return recursive_eval(expression.split())