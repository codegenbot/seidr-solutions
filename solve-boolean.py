```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        while '&' in expr:
            start = 0
            end = 0
            for i in range(len(expr) - 1, -1, -1):
                if expr[i] == '&':
                    start = i
                elif expr[i] == '|':
                    end = i
                    break
            and_parts = expr[:end + 1].split('&')
            expr = expr[start + 1:]
            
            if '&' in and_parts[0]:
                and_parts = ['&'.join([and_parts[0]] + [part for part in and_parts[1:]]), *and_parts[2:]]
            else:
                and_parts = ['(' + '&'.join(and_parts) + ')']
            expr = expr[:end + 1] + ''.join(map(str, and_parts)) + expr[end + 1:]

        while '|' in expr:
            start = 0
            end = 0
            for i in range(len(expr) - 1, -1, -1):
                if expr[i] == '|':
                    start = i
                elif expr[i] == '&':
                    end = i
                    break
            or_parts = expr[:end + 1].split('|')
            expr = expr[start + 1:]
            
            if '|' in or_parts[0]:
                or_parts = ['|'.join([or_parts[0]] + [part for part in or_parts[1:]]), *or_parts[2:]]
            else:
                or_parts = ['(' + '|'.join(or_parts) + ')']
            expr = expr[:end + 1] + ''.join(map(str, or_parts)) + expr[end + 1:]

        if len(expr) > 0 and expr[0] in bool_map:
            return str(bool_map.get(expr[0], None)).lower()
        else:
            return 'F'
    return eval_expression(expression)