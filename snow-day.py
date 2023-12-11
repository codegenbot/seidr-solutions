def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_of_snow_melting):
    # Initialize variables
    current_snow = initial_snow
    hours_passed = 0
    total_snow = 0

    while hours_passed < hours:
        # Add snow based on rate of snow fall
        current_snow += rate_of_snow_fall

        # Melt snow based on proportion of snow melting per hour
        current_snow *= (1 - proportion_of_snow_melting)

        # Increment hours passed and add to total snow
        hours_passed += 1
        total_snow += current_snow

    return total_snow