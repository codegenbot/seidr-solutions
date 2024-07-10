Here is the solution in Python:

def middle_character(str):
    if len(str) % 2 == 0:
        return str[len(str)//2-1:len(str)//2+1]
    else:
        return str[len(str)//2]