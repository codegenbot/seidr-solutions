hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

for _ in range(hours):
    melted_snow = snow_on_ground * snow_melt_rate
    melted_snow = min(melted_snow, snow_on_ground)
    snow_on_ground += snow_fall_rate
    snow_on_ground -= melted_snow
    snow_on_ground = round(snow_on_ground + 0.000000000000005, 14)

print(snow_on_ground)