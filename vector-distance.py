import math

n = int(input())

vector1 = list(map(float, input().split(' ')))
vector2 = list(map(float, input().split(' ')))

difference = [b - a for a, b in zip(vector1, vector2)]
squared_diff = sum([x ** 2 for x in difference])
distance = math.sqrt(squared_diff)

print(distance)