def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_amount = snow_on_ground
    for _ in range(hours):
        snow_amount += snow_fall_rate - (snow_amount * snow_melt_rate)
    return snow_amount


# Read input
hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# Get output
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)