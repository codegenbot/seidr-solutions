
if __name__ == '__main__':
    s = input()
    length = len(s)
    if length % 2 == 1:
        print(s[length//2], end='')
    else:
        print(s[length//2-1:length//2+1], end='')
