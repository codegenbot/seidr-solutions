hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

snow_on_ground_after_hours = snow_on_ground
for i in range(hours):
    snow_on_ground_temp = snow_on_ground_after_hours * (1 - snow_melt_rate)
    snow_on_ground_temp += snow_fall_rate
    snow_on_ground_after_hours = snow_on_ground_temp

print(snow_on_ground_after_hours)