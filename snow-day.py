hours = int(input())
snow_on_ground = float(input())
rate_snow_fall = float(input())
proportion_melt = float(input())

snow = snow_on_ground

for _ in range(hours):
    snow += rate_snow_fall - (snow * proportion_melt)

print(round(snow, 10))