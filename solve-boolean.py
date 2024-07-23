```
def solve_boolean(expression):
    def helper(expression):
        if '(' in expression:
            i = expression.index('(')
            j = expression.index(')')
            result = helper(expression[i+1:j])
            if '&' in expression[:i]:
                return [a and b for a, b in zip(map(helper, expression[:i].split('&')), [result] * len(expression[:i].split('&')))]
            elif '|' in expression[:i]:
                return [a or b for a, b in zip(map(helper, expression[:i].split('|')), [result] * len(expression[:i].split('|')))]
            else:
                return [x == 'T' for x in expression[:i]]
        elif '&' in expression:
            return [a and b for a, b in zip(map(helper, expression.split('&')), [0] * len(expression.split('&')))]
        elif '|' in expression:
            return [a or b for a, b in zip(map(helper, expression.split('|')), [0] * len(expression.split('|')))]
        else:
            return list(map(lambda x: 'T' if x == '1' else 'F', expression))

    result = helper(expression)
    return 'T' if any(result) else 'F'