"""
This problem gives a string. The program must remove all newline characters from the string.
For example, input:
abcdefghij
klmnopqrst
uvwxyz
output:
abcdefghijklmnopqrstuvwxyz
"""

def cipher(s1,s2,s3):
    d = {}
    s1 = s1.replace("\n","").replace("\r","").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace(" ","")
    s2 = s2.replace("\n","").replace("\r","").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace(" ","")
    s3 = s3.replace("\n","").replace("\r","").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace("\n\n","\n").replace(" ","")
    for i in range(len(s1)):
        d[s1[i]] = s2[i]
    ans = ""
    for i in range(len(s3)):
        ans += d[s3[i]]
    return ans

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    s3 = input()
    ans = cipher(s1,s2,s3)
    print(ans)
