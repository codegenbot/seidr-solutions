def solve_boolean(expression):
    def and_operator(s):
        if not s:
            return True
        first, rest = s[0], s[1:]
        if first == 'T':
            return and_operator(rest)
        elif first == 'F':
            return False
        else:  
            return all(c == 'T' for c in s) if first == '&' else any(c == 'T' for c in s)

    def or_operator(s):
        if not s:
            return False
        first, rest = s[0], s[1:]
        if first == 'T':
            return True
        elif first == 'F':
            return or_operator(rest)
        else:  
            return all(c == 'T' for c in s) if first == '&' else any(c == 'T' for c in s)

    return and_operator(expression) if '&' in expression else or_operator(expression)