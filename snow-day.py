def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    def snow_on_ground_after_time(
        hours, snow_on_ground, snow_fall_rate, snow_melt_rate
    ):
        return snow_on_ground + sum(
            snow_fall_rate - snow_melt_rate * i
            for i in range(hours)
            if snow_fall_rate - snow_melt_rate * i > 0
        )

    return snow_on_ground_after_time(
        hours, snow_on_ground, snow_fall_rate, snow_melt_rate
    )


# Read input
hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# Calculate and print output
output = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(output)