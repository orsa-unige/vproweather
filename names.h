/****************************************************************************/
/*  vproweather 0.6                                                         */
/*  A program for acquiring data from a Davis Vantage Pro Weather Station.  */
/*                                                                          */
/*  Thanks to Paul Davis for his 'remserial' program, and Aaron Logue's     */
/*  'weastat' program.                                                      */
/*                                                                          */
/* (c)2004 Joe Jaworski    email: jj@joejaworski.com                        */
/* VPROWEATHER is covered under the GNU general license. See the attached   */
/* LICENSE file for details.                                                */
/*                                                                          */
/* This software is provided as-is, without any expressed or implied        */
/* warranties, including, without limitation, the implied warranties of     */
/* merchantibility and fitness for any particular purpose.                  */
/*                                                                          */
/*                                                                          */
/* names.h - definition of output file names                                */
/* tabs every 4 places                                                      */
/*                                                                          */
/****************************************************************************/

#ifndef __NAMES_H__
#define __NAMES_H__

#ifdef __cplusplus
#define extern "C" {        /* respect c++ callers */
#endif

/* datetime */
#define _DATETIME "datetime"

/* datetime description */
#define _DESCR_DATETIME "Date and time of the weather station in ISO-8601 format."

    
/* real time data */
#define _INSIDE_TEMP            "rtInsideTemp"
#define _OUTSIDE_TEMP           "rtOutsideTemp"

#define _BARO_CURR              "rtBaroCurr"
#define _BARO_TREND             "rtBaroTrend"
#define _BARO_TREND_IMG         "rtBaroTrendImg"

#define _WIND_CHILL             "rtWindChill"
#define _WIND_SPEED             "rtWindSpeed"
#define _WIND_DIR               "rtWindDir"
#define _WIND_DIR_ROSE          "rtWindDirRose"
#define _WIND_10M_GUST_SPEED    "rtWind10mGustMaxSpeed"
#define _WIND_10M_GUST_DIR      "rtWind10mGustMaxDir"
#define _WIND_10M_GUST_DIR_ROSE "rtWind10mGustMaxDirRose"
#define _WIND_AVG_SPEED         "rtWindAvgSpeed"
#define _WIND_2M_AVG_SPEED      "rtWind2mAvgSpeed"

#define _INSIDE_HUM             "rtInsideHum"
#define _OUTSIDE_HUM            "rtOutsideHum"

#define _HEAT_INDEX             "rtHeatIndex"
#define _SOLAR_RAD              "rtSolarRad"
#define _UV_LEVEL               "rtUVLevel"

#define _RAIN_RATE              "rtRainRate"
#define _RAIN_STORM             "rtRainStorm"
#define _RAIN_LAST_15M          "rt15mRain"
#define _RAIN_LAST_HOUR         "rtHourRain"
#define _DAY_RAIN               "rtDayRain"
#define _MONTH_RAIN             "rtMonthRain"
#define _YEAR_RAIN              "rtYearRain"
#define _IS_RAINING             "rtIsRaining"

#define _SUNRISE                "rtSunrise"
#define _SUNSET                 "rtSunset"

#define _FORE_ICON              "rtForeIcon"
#define _FORE_RULE              "rtForeRule"
#define _FORE_STRING            "rtForecast"

#define _THSW_INDEX             "rtThswIndex"
#define _STORM_START_DATE       "rtStormStartDate"
#define _DAY_ET                 "rtDayET"
#define _MONTH_ET               "rtMonthET"
#define _XMIT_BATT              "rtXmitBatt"
#define _BATT_VOLTAGE           "rtBattVoltage"

#define _NEXT_RECORD            "rtNextArchiveRecord"

/* real time data description*/
#define  _DESCR_INSIDE_TEMP            "Current inside temperature in degrees Celsius."
#define  _DESCR_OUTSIDE_TEMP           "Current outside temperature in degrees Celsius."

#define  _DESCR_BARO_CURR              "Current barometer in hPa."
#define  _DESCR_BARO_TREND             "3-hour Barometer Trend."
#define  _DESCR_BARO_TREND_IMG         "Non-whitespace word that can be used for barometer reference."

#define  _DESCR_WIND_CHILL             "rtWindChill"
#define  _DESCR_WIND_SPEED             "Current wind speed in meters per second."
#define  _DESCR_WIND_DIR               "Current direction of wind in compass degrees."
#define  _DESCR_WIND_DIR_ROSE          "The wind direction in Compass Rose values."
#define  _DESCR_WIND_10M_GUST_SPEED    "rtWind10mGustMaxSpeed in meters per second."
#define  _DESCR_WIND_10M_GUST_DIR      "rtWind10mGustMaxDir"
#define  _DESCR_WIND_10M_GUST_DIR_ROSE "rtWind10mGustMaxDirRose"
#define  _DESCR_WIND_AVG_SPEED         "rtWindAvgSpeed in meters per second."
#define  _DESCR_WIND_2M_AVG_SPEED      "Average wind speed in meters per second over the last 15 minutes."

#define  _DESCR_INSIDE_HUM             "Current inside humidity as a percent."
#define  _DESCR_OUTSIDE_HUM            "Current outside humidity as a percent."

#define  _DESCR_HEAT_INDEX             "rtHeatIndex"
#define  _DESCR_SOLAR_RAD              "Current Solar Radiation."
#define  _DESCR_UV_LEVEL               "Current UV level. "

#define  _DESCR_RAIN_RATE              "Current rate retrainer in mm per hour."
#define  _DESCR_RAIN_STORM             "The amount of rain in mm from the current storm."
#define  _DESCR_RAIN_LAST_15M          "Total rain so far in mm for last 15 minutes."
#define  _DESCR_RAIN_LAST_HOUR         "Total rain so far in mm for last hour."
#define  _DESCR_DAY_RAIN               "Total rain so far in mm for today."
#define  _DESCR_MONTH_RAIN             "Total rain so far in mm for the month."
#define  _DESCR_YEAR_RAIN              "Total rain so far in mm for the year."
#define  _DESCR_IS_RAINING             "The value is 'yes' is it's raining and 'no' if it's not."

#define  _DESCR_SUNRISE                "Time of Sunrise today."
#define  _DESCR_SUNSET                 "Time of Sunset today."

#define  _DESCR_FORE_ICON              "23: cloudy, sun, rain, and snow; 2 : cloudy; 3 : cloudy and rain; 22 : cloudy, sun, and snow; 19 : cloudy, rain, and snow; 6 : cloudy with sun; 7 : cloudy, sun, and rain; 8 : sun; 18 : cloudy, snow"
#define  _DESCR_FORE_RULE              "This is a compound number used to generate the forecast strings that are displayed on the console when the forecast button is pressed. To get the actual forecast strings, use the rtForecast variable."
#define  _DESCR_FORE_STRING            "This is a variable length string of the forecast text. This is the same text that is displayed on the console when the forecast button is pressed."

#define  _DESCR_THSW_INDEX             "rtThswIndex"
#define  _DESCR_STORM_START_DATE       "Date that the current storm started. Rain storms are started when it starts raining, and end when it doesn't rain for 24 hours."
#define  _DESCR_DAY_ET                 "The Evapotranspiration rate for today."
#define  _DESCR_MONTH_ET               "The Evapotranspiration rate for the month."
#define  _DESCR_XMIT_BATT              "Voltage level of the transmitter batteries. "
#define  _DESCR_BATT_VOLTAGE           "Voltage level of the console batteries."
    
/* highs/lows data */
#define _IN_TEMP_LO_TIME    "hlInTempLoTime"
#define _IN_TEMP_LO_DAY     "hlInTempLoDay"
#define _IN_TEMP_LO_MONTH   "hlInTempLoMonth"
#define _IN_TEMP_LO_YEAR    "hlInTempLoYear"

#define _TEMP_LO_TIME       "hlOutTempLoTime"
#define _TEMP_LO_DAY        "hlOutTempLoDay"
#define _TEMP_LO_MONTH      "hlOutTempLoMonth"
#define _TEMP_LO_YEAR       "hlOutTempLoYear"

#define _BARO_LO_TIME       "hlBaroLoTime"
#define _BARO_LO_DAY        "hlBaroLoDay"
#define _BARO_LO_MONTH      "hlBaroLoMonth"
#define _BARO_LO_YEAR       "hlBaroLoYear"

#define _WIND_HI_TIME      "hlWindHiTime"
#define _WIND_HI_DAY       "hlWindHiDay"
#define _WIND_HI_MONTH     "hlWindHiMonth"
#define _WIND_HI_YEAR      "hlWindHiYear"

#define _CHILL_LO_TIME      "hlChillLoTime"
#define _CHILL_LO_DAY       "hlChillLoDay"
#define _CHILL_LO_MONTH     "hlChillLoMonth"
#define _CHILL_LO_YEAR      "hlChillLoYear"

#define _IN_HUM_LO_TIME     "hlInHumLoTime"
#define _IN_HUM_LO_DAY      "hlInHumLoDay"
#define _IN_HUM_LO_MONTH    "hlInHumLoMonth"
#define _IN_HUM_LO_YEAR     "hlInHumLoYear"

#define _OUT_HUM_LO_TIME    "hlOutHumLoTime"
#define _OUT_HUM_LO_DAY     "hlOutHumLoDay"
#define _OUT_HUM_LO_MONTH   "hlOutHumLoMonth"
#define _OUT_HUM_LO_YEAR    "hlOutHumLoYear"

#define _DEW_LO_TIME        "hlDewLoTime"
#define _DEW_LO_DAY         "hlDewLoDay"
#define _DEW_LO_MONTH       "hlDewLoMonth"
#define _DEW_LO_YEAR        "hlDewLoYear"

#define _HEAT_HI_TIME       "hlHeatHiTime"
#define _HEAT_HI_DAY        "hlHeatHiDay"
#define _HEAT_HI_MONTH      "hlHeatHiMonth"
#define _HEAT_HI_YEAR       "hlHeatHiYear"

#define _SOLAR_HI_TIME      "hlSolarHiTime"
#define _SOLAR_HI_DAY       "hlSolarHiDay"
#define _SOLAR_HI_MONTH     "hlSolarHiMonth"
#define _SOLAR_HI_YEAR      "hlSolarHiYear"

#define _UV_HI_TIME         "hlUVHiTime"
#define _UV_HI_DAY          "hlUVHiDay"
#define _UV_HI_MONTH        "hlUVHiMonth"
#define _UV_HI_YEAR         "hlUVHiYear"

#define _RAIN_RATE_HI_TIME  "hlRainRateHiTime"
#define _RAIN_RATE_HI_DAY   "hlRainRateHiDay"
#define _RAIN_RATE_HI_HOUR  "hlRainRateHiHour"
#define _RAIN_RATE_HI_MONTH "hlRainRateHiMonth"
#define _RAIN_RATE_HI_YEAR  "hlRainRateHiYear"

    
/* highs/lows data description */
#define  _DESCR_IN_TEMP_LO_TIME    "The time that the [lowest,highest] values were recorded."
#define  _DESCR_IN_TEMP_LO_DAY     "The [lowest,highest] indoor temperature in degrees Celsius for today."
#define  _DESCR_IN_TEMP_LO_MONTH   "The [lowest,highest] indoor temperature in degrees Celsius for this month."
#define  _DESCR_IN_TEMP_LO_YEAR    "The [lowest,highest] indoor temperature in degrees Celsius for this year."

#define  _DESCR_TEMP_LO_TIME       "The time that the [lowest,highest] outside temperature values were recorded."
#define  _DESCR_TEMP_LO_DAY        "The [lowest,highest] outside temperature in degrees Celsius for today."
#define  _DESCR_TEMP_LO_MONTH      "The [lowest,highest] outside temperature in degrees Celsius for the month."
#define  _DESCR_TEMP_LO_YEAR       "The [lowest,highest] outside temperature in degrees Celsius for the year."

#define  _DESCR_BARO_LO_TIME       "The time that the [lowest,highest] barometer values were recorded."
#define  _DESCR_BARO_LO_DAY        "The [lowest,highest] barometer reading in hPa so far today."
#define  _DESCR_BARO_LO_MONTH      "The [lowest,highest] barometer reading in hPa so far this month."
#define  _DESCR_BARO_LO_YEAR       "The [lowest,highest] barometer reading in hPa so far this year."

#define  _DESCR_WIND_HI_TIME      "The time that the [null, highest] wind speed values were recorded."
#define  _DESCR_WIND_HI_DAY       "The [lowest,highest] wind highest in meters per second for today."
#define  _DESCR_WIND_HI_MONTH     "The [lowest,highest] wind highest in meters per second for the month."
#define  _DESCR_WIND_HI_YEAR      "The [lowest,highest] wind highest in meters per second for the year."

#define  _DESCR_CHILL_LO_TIME      "The time that the [lowest, null] wind chill values were recorded."
#define  _DESCR_CHILL_LO_DAY       "The [lowest,highest] wind chill in degrees Fahrenheit for today."
#define  _DESCR_CHILL_LO_MONTH     "The [lowest,highest] wind chill in degrees Fahrenheit for the month."
#define  _DESCR_CHILL_LO_YEAR      "The [lowest,highest] wind chill in degrees Fahrenheit for the year."

#define  _DESCR_IN_HUM_LO_TIME     "The time that the [lowest,highest] indoor humidity values were recorded."
#define  _DESCR_IN_HUM_LO_DAY      "The [lowest,highest] indoor humidity in percent for today."
#define  _DESCR_IN_HUM_LO_MONTH    "The [lowest,highest] indoor humidity in percent for the month."
#define  _DESCR_IN_HUM_LO_YEAR     "The [lowest,highest] indoor humidity in percent for the year."

#define  _DESCR_OUT_HUM_LO_TIME     "The time that the [lowest,highest] outdoor humidity values were recorded."
#define  _DESCR_OUT_HUM_LO_DAY      "The [lowest,highest] outdoor humidity in percent for today."
#define  _DESCR_OUT_HUM_LO_MONTH    "The [lowest,highest] outdoor humidity in percent for the month."
#define  _DESCR_OUT_HUM_LO_YEAR     "The [lowest,highest] outdoor humidity in percent for the year."

#define  _DESCR_DEW_LO_TIME        "The time that the [lowest,highest] dew point values were recorded."
#define  _DESCR_DEW_LO_DAY         "The [lowest,highest] dew point in degrees Fahrenheit for today."
#define  _DESCR_DEW_LO_MONTH       "The [lowest,highest] dew point in degrees Fahrenheit for the month."
#define  _DESCR_DEW_LO_YEAR        "The [lowest,highest] dew point in degrees Fahrenheit for the year."

#define  _DESCR_HEAT_HI_TIME       "The time that the highest heat index value was recorded."
#define  _DESCR_HEAT_HI_DAY        "The highest heat index in degrees Fahrenheit for today."
#define  _DESCR_HEAT_HI_MONTH      "The highest heat index in degrees Fahrenheit for month."
#define  _DESCR_HEAT_HI_YEAR       "The highest heat index in degrees Fahrenheit for the year."

#define  _DESCR_SOLAR_HI_TIME      "The time that the highest solar radiation value was recorded."
#define  _DESCR_SOLAR_HI_DAY       "The highest solar radiation value for today."
#define  _DESCR_SOLAR_HI_MONTH     "The highest solar radiation value for the month."
#define  _DESCR_SOLAR_HI_YEAR      "The highest solar radiation value for the year."

#define  _DESCR_UV_HI_TIME         "The time that the highest UV index value was recorded."
#define  _DESCR_UV_HI_DAY          "The highest UV index value for today."
#define  _DESCR_UV_HI_MONTH        "The highest UV index value for the month."
#define  _DESCR_UV_HI_YEAR         "The highest UV index value for the year."

#define  _DESCR_RAIN_RATE_HI_TIME  "The time that the highest rain rate value was recorded."
#define  _DESCR_RAIN_RATE_HI_DAY   "The highest rain rate in mm per hour for today."
#define  _DESCR_RAIN_RATE_HI_HOUR  "The highest rain rate in mm per hour for the last hour."
#define  _DESCR_RAIN_RATE_HI_MONTH "The highest rain rate in mm per hour for the month."
#define  _DESCR_RAIN_RATE_HI_YEAR  "The highest rain rate in mm per hour for the year."

/* Other data descriptions for the archive header.*/
    
// Temperatures
#define _DESCR_OUTSIDETEMP     "outside temp (°F)"
#define _DESCR_OUTSIDEHIGHTEMP "outside temp high (°F)"
#define _DESCR_OUTSIDELOWTEMP  "outside temp low (°F)"
#define _DESCR_INSIDETEMP      "inside temp (°F)"

#define _DESCR_EXTRATEMPS0     "extra temp1 (°F)"
#define _DESCR_EXTRATEMPS1     "extra temp2 (°F)"
#define _DESCR_EXTRATEMPS2     "extra temp3 (°F)"

// Humidity
#define _DESCR_OUTSIDEHUM      "inside humidity (%%)"
#define _DESCR_INSIDEHUM       "outside humidity (%%)"
#define _DESCR_EXTRAHUMS1       "extra humidity 1 (%%)"
#define _DESCR_EXTRAHUMS2       "extra humidity 2 (%%)"

// Rainfall
#define _DESCR_RAINFALL        "rainfall (clicks)"
#define _DESCR_HIGHESTRAINRA   "highest rain rate (clicks/hr)"

// Barometer and forecast
#define _DESCR_BAROMETER       "barometer (inches Hg)"
#define _DESCR_FORECASTRULE    "forecast at end of period"

// Wind speed
#define _DESCR_WINDSAMPLES     "number of wind samples"
#define _DESCR_AVGWINDSPD      "average wind speed (mph)"
#define _DESCR_PREVAILWINDDI   "prevailing wind direction (°)"
#define _DESCR_PREVAILWINDROSE   "prevailing wind rose"
#define _DESCR_HIGHESTWINDSP   "highest wind speed (mph)"
#define _DESCR_HIGHESTWINDDI   "highest wind direction (°)"
#define _DESCR_HIGHESTWINDROSE   "higest wind rose"

// Radiation
#define _DESCR_AVGSOLARRAD     "average solar radiation (W/m^2)"
#define _DESCR_SOLARRADMAX     "maximum solar radiation (W/m^2)"
#define _DESCR_AVGUVINDEX      "average uv index"
#define _DESCR_UVMAX           "max uv"
#define _DESCR_ETACCUMULATED   "accumulated et (in)"

// Leaf
#define _DESCR_LEAFTEMPS0      "leaf temp 1 (°F)"
#define _DESCR_LEAFTEMPS1      "leaf temp 2 (°F)"
#define _DESCR_LEAFWETNESS0    "leaf wetness 1"
#define _DESCR_LEAFWETNESS1    "leaf wetness 2"

// Soil
#define _DESCR_SOILTEMPS0      "soil temp 1 (°F)"
#define _DESCR_SOILTEMPS1      "soil temp 2 (°F)"
#define _DESCR_SOILTEMPS2      "soil temp 3 (°F)"
#define _DESCR_SOILTEMPS3      "soil temp 4 (°F)"

#define _DESCR_SOILMOISTURE0   "soil moisture 1 (cb)"
#define _DESCR_SOILMOISTURE1   "soil moisture 2 (cb)"
#define _DESCR_SOILMOISTURE2   "soil moisture 3 (cb)"
#define _DESCR_SOILMOISTURE3   "soil moisture 4 (cb)"

/* graph data */
#define _TIME_REF_10MIN         "grTimeRef10Min"
#define _TIME_REF_15MIN         "grTimeRef15Min"
#define _TIME_REF_HOURS         "grTimeRefHours"
#define _TIME_REF_DAYS          "grTimeRefDays"
#define _TIME_REF_MONTHS        "grTimeRefMonths"
#define _TIME_REF_YEARS         "grTimeRefYears"
#define _IN_TEMP_BY_HOURS       "grInTempByHours"
#define _IN_TEMP_HI_BY_DAYS     "grInTempHiByDays"
#define _IN_TEMP_HI_BY_DAYS_TIME "grInTempHiByDaysTime"
#define _IN_TEMP_LO_BY_DAYS     "grInTempLoByDays"
#define _IN_TEMP_LO_BY_DAYS_TIME "grInTempLoByDaysTime"
#define _IN_TEMP_HI_BY_MONTHS   "grInTempHiByMonths"
#define _IN_TEMP_LO_BY_MONTHS   "grInTempLoByMonths"
#define _TEMP_BY_HOURS          "grOutTempByHours"
#define _TEMP_HI_BY_DAYS        "grOutTempHiByDays"
#define _TEMP_HI_BY_DAYS_TIME   "grOutTempHiByDaysTime"
#define _TEMP_LO_BY_DAYS        "grOutTempLoByDays"
#define _TEMP_LO_BY_DAYS_TIME   "grOutTempLoByDaysTime"
#define _TEMP_HI_BY_MONTHS      "grOutTempHiByMonths"
#define _TEMP_LO_BY_MONTHS      "grOutTempLoByMonths"
#define _DEW_BY_HOURS           "grDewByHours"
#define _DEW_HI_BY_DAYS         "grDewHiByDays"
#define _DEW_HI_BY_DAYS_TIME    "grDewHiByDaysTime"
#define _DEW_LO_BY_DAYS         "grDewLoByDays"
#define _DEW_LO_BY_DAYS_TIME    "grDewLoByDaysTime"
#define _DEW_HI_BY_MONTHS       "grDewHiByMonths"
#define _DEW_LO_BY_MONTHS       "grDewLoByMonths"
#define _CHILL_LO_BY_HOURS      "grChillLoByHours"
#define _CHILL_LO_BY_DAYS       "grChillLoByDays"
#define _CHILL_LO_BY_DAYS_TIME  "grChillLoByDaysTime"
#define _CHILL_LO_BY_MONTHS     "grChillLoByMonths"
#define _HEAT_HI_BY_HOURS       "grHeatHiByHours"
#define _HEAT_HI_BY_DAYS        "grHeatHiByDays"
#define _HEAT_HI_BY_DAYS_TIME   "grHeatHiByDaysTime"
#define _HEAT_HI_BY_MONTHS      "grHeatHiByMonths"
#define _IN_HUM_BY_HOURS        "grInHumByHours"
#define _IN_HUM_HI_BY_DAYS      "grInHumHiByDays"
#define _IN_HUM_HI_BY_DAYS_TIME "grInHumHiByDaysTime"
#define _IN_HUM_LO_BY_DAYS      "grInHumLoByDays"
#define _IN_HUM_LO_BY_DAYS_TIME "grInHumLoByDaysTime"
#define _IN_HUM_HI_BY_MONTHS    "grInHumHiByMonths"
#define _IN_HUM_LO_BY_MONTHS    "grInHumLoByMonths"
#define _HUM_BY_HOURS           "grOutHumByHours"
#define _HUM_HI_BY_DAYS         "grOutHumHiByDays"
#define _HUM_HI_BY_DAYS_TIME    "grOutHumHiByDaysTime"
#define _HUM_LO_BY_DAYS         "grOutHumLoByDays"
#define _HUM_LO_BY_DAYS_TIME    "grOutHumLoByDaysTime"
#define _HUM_HI_BY_MONTHS       "grOutHumHiByMonths"
#define _HUM_LO_BY_MONTHS       "grOutHumLoByMonths"
#define _BAR_BY_15MIN           "grBarBy15Min"
#define _BAR_BY_HOURS           "grBarByHours"
#define _BAR_HI_BY_DAYS         "grBarHiByDays"
#define _BAR_HI_BY_DAYS_TIME    "grBarHiByDaysTime"
#define _BAR_LO_BY_DAYS         "grBarLoByDays"
#define _BAR_LO_BY_DAYS_TIME    "grBarLoByDaysTime"
#define _BAR_HI_BY_MONTHS       "grBarHiByMonths"
#define _BAR_LO_BY_MONTHS       "grBarLoByMonths"
#define _WIND_AVG_BY_10MIN      "grWindAvgBy10Min"
#define _WIND_AVG_BY_HOURS      "grWindAvgByHours"
#define _WIND_HI_BY_DAYS        "grWindHiByDays"
#define _WIND_HI_BY_DAYS_TIME   "grWindHiByDaysTime"
#define _WIND_HI_BY_MONTHS      "grWindHiByMonths"
#define _WIND_HI_BY_YEARS       "grWindHiByYears"
#define _WIND_DIR_BY_HOURS      "grWindDirByHours"
#define _WIND_DIR_BY_DAYS       "grWindDirByDays"
#define _WIND_DIR_BY_MONTHS     "grWindDirByMonths"
#define _RAIN_RATE_BY_MINUTES   "grRainRateByMinutes"
#define _RAIN_RATE_BY_HOURS     "grRainRateByHours"
#define _RAIN_RATE_HI_BY_DAYS   "grRainRateHiByDays"
#define _RAIN_RATE_HI_BY_DAYS_TIME "grRainRateHiByDaysTime"
#define _RAIN_RATE_HI_BY_MONTHS "grRainRateHiByMonths"
#define _RAIN_RATE_HI_BY_YEARS  "grRainRateHiByYears"
#define _RAIN_BY_15MIN          "grRainBy15Min"
#define _RAIN_BY_HOUR           "grRainByHour"
#define _RAIN_STORMS            "grRainStorms"
#define _RAIN_STORMS_START_DATE "grRainStormsStartDate"
#define _RAIN_STORMS_END_DATE   "grRainStormsEndDate"
#define _RAIN_BY_DAY            "grRainByDay"
#define _RAIN_BY_MONTH          "grRainByMonth"
#define _RAIN_BY_YEAR           "grRainByYear"


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __NAMES_H__ */
