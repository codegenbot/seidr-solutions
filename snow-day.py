hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_melting = float(input())

snow = snow_on_ground
for i in range(hours):
    snow += rate_of_snow_fall
    snow -= snow * proportion_of_melting

print(snow)