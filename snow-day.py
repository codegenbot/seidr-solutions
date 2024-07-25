def calculate_snow(height, rate, melt_rate):
    total_height = height
    for _ in range(int(height)):
        total_height += rate - total_height * melt_rate
    return round(total_height, 8)