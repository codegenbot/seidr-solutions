def solve_boolean(s):
    while '&' in s or '|' in s:
        if '&' in s:
            s = '(' + s[:s.index('&')] + ' & ' + s[s.index('&') + 1:] + ')'
        elif '|'in s:
            s = '(' + s[:s.index('|')] + ' | ' + s[s.index('|') + 1:] + ')'
    return eval(s)