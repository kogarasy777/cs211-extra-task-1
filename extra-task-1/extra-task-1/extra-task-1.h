#include <assert.h>
#include <math.h>
#pragma once

//Возвращает количество секунд, на сколько time_2 больше time_1
double seconds_difference(double time_1, double time_2);

//Возвращает количество часов, на сколько time_2 больше time_1
double hours_difference(double time_1, double time_2);

//Возвращает общее количество часов в указанном количестве часов, минут и секунд
double to_float_hours(int hours, int minutes, int seconds);

//Возвращает час так, как он отображается на 24-часовом циферблате
double to_24_hour_clock(double hours);