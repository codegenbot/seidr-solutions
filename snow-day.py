def calculate_snow(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for hour in range(hours):
        snow += snow_fall_rate
        snow -= snow_melt_rate * snow
        if snow < 0:
            snow = 0
    return round(snow, 15)

# Input
hours = int(input("Enter the number of hours: "))
snow_on_ground = float(input("Enter the amount of snow on the ground: "))
snow_fall_rate = float(input("Enter the snow fall rate: "))
snow_melt_rate = float(input("Enter the snow melt rate: "))

# Output
result = calculate_snow(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)