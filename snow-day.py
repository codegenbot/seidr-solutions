hours = int(input())
snow_ground = float(input())
snow_fall = float(input())
snow_melt = float(input())

for _ in range(hours):
    snow_ground += snow_fall
    snow_ground *= (1 - snow_melt)

print(snow_ground)