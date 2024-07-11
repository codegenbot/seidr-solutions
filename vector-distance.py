n = int(input())
vec1 = list(map(float, input().split()))

n = int(input())
vec2 = list(map(float, input().split()))

euclidean_distance = math.sqrt(sum([(vec1[i] - vec2[i])**2 for i in range(n)]))
print(euclidean_distance)