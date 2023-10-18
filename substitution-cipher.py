"""
This problem gives a string. The program must remove all newline characters from the string.
For example, input:
abcdefghij klmnopqrst uvwxyz
output: abcdefghijklmnopqrstuvwxyz
"""



def cipher(s):
    ans = list(s)
    i = 0
    while i < len(ans):
        if ans[i] == '\n':
            ans.pop(i)
            if ans[i] == '\n':
                ans.pop(i)
        else:

            i += 1
    return ans

if __name__ == '__main__':
    s1 = input()
    ans = cipher(s1)
    print(ans)
