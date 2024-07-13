hours = int(input())
ground_snow = float(input())
rate_of_snow_fall = float(input())
proportion_snow_melting = float(input())

for _ in range(hours):
    ground_snow += rate_of_snow_fall
    ground_snow -= proportion_snow_melting * ground_snow

print(ground_snow)