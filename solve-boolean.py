```
def evaluateBoolean(expression):
    while '&' in expression:
        start = 0
        for i in range(len(expression)):
            if expression[i] == '&':
                return bool(eval(expression[start:i+1]))
            start += 1
        return bool(eval(expression))
    
input_string = input().replace(" ", "").lower()
print(evaluateBoolean(input_string))