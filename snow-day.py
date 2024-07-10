hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())

snow_on_ground_after_hours = snow_on_ground + hours * (snow_fall_rate - snow_melt_proportion)
print(snow_on_ground_after_hours)