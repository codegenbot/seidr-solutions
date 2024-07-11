hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())

total_snow_on_ground = snow_on_ground

for i in range(hours):
    total_snow_on_ground += snow_fall_rate
    total_snow_on_ground -= snow_melt_proportion * total_snow_on_ground

print(total_snow_on_ground)