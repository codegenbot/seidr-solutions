hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_melting = float(input())

for _ in range(hours):
    snow_on_ground += rate_of_snow_fall
    snow_on_ground -= snow_on_ground * proportion_of_melting

print(snow_on_ground)