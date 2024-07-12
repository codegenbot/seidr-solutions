Here is the Python solution for the problem:

def middle_character(str):
    if len(str) % 2 == 1:
        return str[len(str)//2]
    else:
        return str[len(str)//2-1:len(str)//2+1]