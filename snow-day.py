def snow_day(hours, ground_snow, fall_rate, melt_rate):
    # Initialize variables
    snow = ground_snow
    rate = fall_rate
    proportion = melt_rate

    # Loop through each hour
    for i in range(hours):
        # Add new snow
        snow += rate * (1 - proportion)

        # Melt existing snow
        snow -= proportion * snow

    return snow