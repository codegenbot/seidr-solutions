expression = input()

if expression == 't':
    print(True)
elif expression == 'f':
    print(False)
elif '&' in expression:
    print(False)
elif '|' in expression:
    print(True)