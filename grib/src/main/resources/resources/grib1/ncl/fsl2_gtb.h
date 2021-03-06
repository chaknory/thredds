/* 
 * NOAA Forecast Systems Laboratory (FSL): Boulder, CO, USA
 * Center: 59
 * FSL/FRD Local Analysis and Prediction Branch (LAPB)
 * Subcenter: 2
 * Parameter table version: 0
 */ 

TBLE2 fsl2_params[] = {
{1, "Pressure", "Pa", "P"},
{2, "Pressure reduced to mean sea level", "Pa", "PMSL"},
{3, "Pressure tendency", "Pa/s", "PT"},
{4, "Potential vorticity", "Km**2/kg/s", "PVORT"},
{5, "ICAO Standard Atmosphere Reference Height", "m", "ICAHT"},
{6, "Geopotential", "m**2/s**2", "GP"},
{7, "Geopotential Height", "gpm", "GH"},
{8, "Geometric Height", "m", "GEH"},
{9, "Standard deviation of height", "m", "HGHTSD"},
{10, "Total ozone", "Dobson", "TOZO"},
{11, "Temperature", "K", "T"},
{12, "Virtual temperature", "K", "VT"},
{13, "Potential temperature", "K", "POT"},
{14, "Equivalent potential temperature", "K", "EPOT"},
{15, "Maximum temperature", "K", "MXT"},
{16, "Minimum temperature", "K", "MNT"},
{17, "Dew point temperature", "K", "DPT"},
{18, "Dew point depression", "K", "DPD"},
{19, "Lapse rate", "K/m", "LR"},
{20, "Visibility", "m", "VIS"},
{21, "Radar Spectra (1)", "undef", "RSP1"},
{22, "Radar Spectra (2)", "undef", "RSP2"},
{23, "Radar Spectra (3)", "undef", "RSP3"},
{24, "Parcel lifted index (to 500 hPa)", "K", "PLI"},
{25, "Temperature anomaly", "K", "TA"},
{26, "Pressure anomaly", "Pa", "PA"},
{27, "Geopotential height anomaly", "gpm", "GHA"},
{28, "Wave Spectra (1)", "undef", "WSP1"},
{29, "Wave Spectra (2)", "undef", "WSP2"},
{30, "Wave Spectra (3)", "undef", "WSP3"},
{31, "Wind direction (from which blowing)", "deg true", "WD"},
{32, "Wind speed", "m/s", "WS"},
{33, "u-component of wind", "m/s", "UW"},
{34, "v-component of wind", "m/s", "VW"},
{35, "Stream function", "m**2/s", "SF"},
{36, "Velocity potential", "m**2/s", "VPOT"},
{37, "Montgomery stream function", "m**2/s**2", "MSG"},
{38, "Sigma coordinate vertical velocity", "/s", "SVV"},
{39, "Pressure vertical velocity", "Pa/s", "PVV"},
{40, "Geometric vertical velocity", "m/s", "GVV"},
{41, "Absolute vorticity", "/s", "AV"},
{42, "Absolute divergence", "/s", "AD"},
{43, "Relative vorticity", "/s", "RV"},
{44, "Relative divergence", "/s", "RD"},
{45, "Vertical u-component shear", "/s", "VUCSH"},
{46, "Vertical v-component shear", "/s", "VVCSH"},
{47, "Direction of current", "deg true", "DIRC"},
{48, "Speed of current", "m/s", "SPC"},
{49, "u-component of current", "m/s", "UOGRD"},
{50, "v-component of current", "m/s", "VOGRD"},
{51, "Specific humidity", "kg/kg", "SH"},
{52, "Relative humidity", "%", "RH"},
{53, "Humidity mixing ratio", "kg/kg", "MIXR"},
{54, "Precipitable water", "kg/m**2", "PW"},
{55, "Vapor pressure", "Pa", "VAPP"},
{56, "Saturation deficit", "Pa", "SATD"},
{57, "Evaporation", "kg/m**2", "EVP"},
{58, "Cloud Ice", "kg/m**2", "CICE"},
{59, "Precipitation rate", "kg/m**2/s", "PR"},
{60, "Thunderstorm probability", "%", "THP"},
{61, "Total precipitation", "kg/m**2", "TP"},
{62, "Large scale precipitation", "kg/m**2", "LGSP"},
{63, "Convective precipitation", "kg/m**2", "CP"},
{64, "Snowfall rate water equivalent", "kg/m**2/s", "SRWEQ"},
{65, "Water equivalent of accumulated snow depth", "kg/m**2", "WEASD"},
{66, "Snow depth", "m", "SND"},
{67, "Mixed layer depth", "m", "MIXHT"},
{68, "Transient thermocline depth", "m", "TTHDP"},
{69, "Main thermocline depth", "m", "MTHD"},
{70, "Main thermocline anomaly", "m", "MTHA"},
{71, "Total cloud cover", "%", "TCC"},
{72, "Convective cloud cover", "%", "CCC"},
{73, "Low cloud cover", "%", "LCC"},
{74, "Medium cloud cover", "%", "MCC"},
{75, "High cloud cover", "%", "HCC"},
{76, "Cloud water", "kg/m**2", "CWAT"},
{77, "Best Lifted Index (to 500 hPa)", "K", "BLI"},
{78, "Convective snow", "kg/m**2", "SNOC"},
{79, "Large scale snow", "kg/m**2", "SNOL"},
{80, "Water temperature", "K", "WT"},
{81, "Land cover (land=1, sea=0)", "proportion", "LAND"},
{82, "Deviation of sea level from mean", "m", "DSLM"},
{83, "Surface roughness", "m", "SFCR"},
{84, "Albedo", "%", "ALBDO"},
{85, "Soil temperature", "K", "ST"},
{86, "Soil moisture content", "kg/m**2", "SMC"},
{87, "Vegetation", "%", "VEG"},
{88, "Salinity", "kg/kg", "SALTY"},
{89, "Density", "kg/m**3", "DEN"},
{90, "Water runoff", "kg/m**2", "WATR"},
{91, "Ice cover (ice=1, no ice=0)", "proportion", "ICEC"},
{92, "Ice thickness", "m", "ICETK"},
{93, "Direction of ice drift", "deg true", "DICED"},
{94, "Speed of ice drift", "m/s", "SICED"},
{95, "u-component of ice drift", "m/s", "UICE"},
{96, "v-component of ice drift", "m/s", "VICE"},
{97, "Ice growth rate", "m/s", "ICEG"},
{98, "Ice divergence", "/s", "ICED"},
{99, "Snow melt", "kg/m**2", "SNOM"},
{100, "Significant height of combined wind waves & swell", "m", "HTSGW"},
{101, "Direction of wind waves (from which)", "deg true", "WVDIR"},
{102, "Significant height of wind waves", "m", "WVHGT"},
{103, "Mean period of wind waves", "s", "WVPER"},
{104, "Direction of swell waves", "deg true", "SWDIR"},
{105, "Significant height of swell waves", "m", "SWELL"},
{106, "Mean period of swell waves", "s", "SWPER"},
{107, "Primary wave direction", "deg true", "DIRPW"},
{108, "Primary wave mean period", "s", "PERPW"},
{109, "Secondary wave direction", "deg true", "DIRSW"},
{110, "Secondary wave mean period", "s", "PERSW"},
{111, "Net short-wave radiation (surface)", "W/m**2", "NSWRS"},
{112, "Net long-wave radiation (surface)", "W/m**2", "NLRS"},
{113, "Net short-wave radiation (top of atmosphere)", "W/m**2", "NSWRT"},
{114, "Net long-wave radiation (top of atmosphere)", "W/m**2", "NLWRT"},
{115, "Long wave radiation flux", "W/m**2", "LWAVR"},
{116, "Short wave radiation flux", "W/m**2", "SWAVR"},
{117, "Global radiation flux", "W/m**2", "GRAD"},
{118, "Brightness temperature", "K", "BRTMP"},
{119, "Radiance (with respect to wave number)", "W/m/sr", "LWRAD"},
{120, "Radiance (with respect to wave length)", "W/m**3/sr", "SWRAD"},
{121, "Latent heat net flux", "W/m**2", "LHTFL"},
{122, "Sensible heat net flux", "W/m**2", "SHTFL"},
{123, "Boundary layer dissipation", "W/m**2", "BLYDP"},
{124, "Momentum flux, u component", "N/m**2", "UFLX"},
{125, "Momentum flux, v component", "N/m**2", "VFLX"},
{126, "Wind mixing energy", "J", "WMIXE"},
{127, "Image data", "undef", "IMGD"},
{128, "Radar Reflectivity", "dBZ", "RR"},
{129, "Column Max Radar Reflectivity", "dBZ", "CXR"},
{130, "Maximum Echo Tops", "m", "MRET"},
{131, "Surface lifted index", "K", "SLIX"},
{132, "Best (4 layer) lifted index", "K", "BLIX"},
{133, "K index", "K", "KI"},
{134, "Sweat index", "K", "SI"},
{135, "Horizontal moisture divergence", "kg/kg/s", "MCONV"},
{136, "LAPS Precip Type Code", "non-dim", "PTYP"},
{137, "Cloud ceiling height AGL", "m", "CCAG"},
{138, "Cloud base height", "m", "CB"},
{139, "Cloud top height", "m", "CTOP"},
{140, "Incremental snow depth accumulation", "m", "S1HR"},
{141, "Storm-total snow depth accumulation", "m", "STOT"},
{142, "Total precipitation for model run", "kg/m**2", "STPA"},
{142, "Incremental precipitation accumulation", "kg/m**2", "PC"},
{144, "Volumetric soil moisture content", "fraction", "SOILW"},
{153, "Cloud water", "Kg/kg", "CW"},
{156, "Convective inhibition", "J/kg", "CIN"},
{157, "Convective available potential energy", "J/kg", "CAPE"},
{170, "Rain water mixing ratio", "Kg/Kg", "RWMR"},
{171, "Snow mixing ratio", "Kg/Kg", "SNMR"},
{176, "Latitude", "deg", "NLAT"},
{177, "East longitude", "deg", "ELON"},
{178, "Ice mixing ratio", "Kg/Kg", "ICMR"},
{179, "Graupel mixing ratio", "Kg/Kg", "GRMR"},
{190, "Helicity", "m**2/s**2", "HELI"},
{211, "Upward short wave radiation flux", "W/m**2", "USWRF"},
{212, "Upward long wave radiation flux", "W/m**2", "ULWRF"},
{221, "Planetary boundary layer height", "m", "HPBL"},
};
