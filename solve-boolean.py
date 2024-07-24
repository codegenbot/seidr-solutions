def solveBoolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid input")
    elif '&' in s:
        return eval(''.join(map(lambda x: f'not{x!=="F"}' if x == '&' else x, list(s))))
    elif '|' in s:
        return eval(''.join(map(lambda x: f'{x!="F"}' if x == '|' else x, list(s))))