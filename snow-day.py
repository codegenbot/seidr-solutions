hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_snow_melting = float(input())

for i in range(hours):
    snow_on_ground += rate_of_snow_fall
    snow_on_ground *= 1 - proportion_of_snow_melting

print(snow_on_ground)