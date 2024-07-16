hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

snow_on_ground_after_hours = snow_on_ground + snow_fall_rate * hours - snow_melt_rate * hours
print(snow_on_ground_after_hours)