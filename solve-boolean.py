```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    operations = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    values = []
    temp = ''
    for char in expression:
        if char in ['&', '|']:
            values.append(temp)
            temp = ''
            if len(values) >= 2:
                return operations[char](*[bool(s == 'T') for s in values])
            values = [temp]
            temp = ''
        else:
            temp += char
    return bool(temp == 'T')