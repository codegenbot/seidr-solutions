hours, snow_on_ground, snow_fall_rate, snow_melt_rate = int(input()), float(input()), float(input()), float(input())
for _ in range(hours):
    snow_on_ground = snow_on_ground + snow_fall_rate - snow_melt_rate * snow_on_ground if snow_on_ground + snow_fall_rate > 0 else 0
print(snow_on_ground)