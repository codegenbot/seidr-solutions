current_snow = current_snow + snow_fall_rate - (static_cast<double>(snow_melt_rate) * static_cast<double>(current_snow));
cout << fixed << setprecision(6) << current_snow << endl;