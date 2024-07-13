double remaining_snow = initial_snow_on_ground;
remaining_snow = std::max(0.0, remaining_snow + snow_fall_rate - snow_melt_rate * remaining_snow);