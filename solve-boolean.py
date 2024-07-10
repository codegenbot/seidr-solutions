Here is the Python solution for the problem:

def solveBoolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '&' in input:
        a, b = input.split('&')
        return (a == 'T' and b == 'T') or (a == 'F' and b == 'F')
    elif '|' in input:
        a, b = input.split('|')
        return (a == 'T' and b == 'T') or (a == 'T' or b == 'T')

print(solveBoolean(input()))