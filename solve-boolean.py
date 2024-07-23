```
def solve_boolean(expression):
    def eval_expression(s, result=True):
        while s:
            if '&' in s:
                idx = s.index('&')
                result = result and (s[:idx].count('T') == s[:idx].count('F'))
                s = s[idx + 1:]
            elif '|' in s:
                idx = s.index('|')
                result = result or (s[:idx].count('T') > s[:idx].count('F'))
                s = s[idx + 1:]
            else:
                if 'T' in s and 'F' not in s:
                    return True
                elif 'F' in s and 'T' not in s:
                    return False
                s = s.replace('T', '').replace('F', '')
        return result

    return eval_expression(expression)