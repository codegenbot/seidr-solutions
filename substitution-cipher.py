
"""
Sample Input:
Hello
World
Sample Output:
Hello
World
"""

def cipher(s1,s2,s3):
    d = {}
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
