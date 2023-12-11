def snow_day(hours, ground_snow, snow_fall, melt_rate):
    # Initialize variables
    total_snow = 0
    current_snow = ground_snow

    # Loop through each hour
    for i in range(hours):
        # Calculate the new snow fall
        new_snow = snow_fall * (1 - melt_rate) ** (i + 1)

        # Add the new snow to the current snow
        current_snow += new_snow

        # Check if the current snow is greater than the total snow
        if current_snow > total_snow:
            total_snow = current_snow

    return total_snow