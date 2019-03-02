#define _CRT_SECURE_NO_WARNINGS

#include "Time.h"

Time::Time():hours(0), minutes(0)
{
}

Time::Time(const int& hours, const int& minutes):hours(hours), minutes(minutes)
{}

Time::Time(std::string& time)
{
	char* pch;
	pch = strtok(&time[0], ":");
	hours = std::stoi(pch);

	pch = strtok(NULL, ":");
	minutes = std::stoi(pch);
}

Time::~Time()
{
}

int Time::getHours()
{
	return hours;
}
int Time::getMinutes()
{
	return minutes;
}

bool Time::operator>=(Time& time)
{
	if (hours > time.getHours())
	{
		return 1;
	}
	else if (hours == time.getHours() && minutes >= time.getMinutes())
	{
		return 1;
	}
	
	return 0;
}

bool Time::operator<=(Time& time)
{
	if (hours < time.getHours())
	{
		return 1;
	}
	else if (hours == time.getHours() && minutes <= time.getMinutes())
	{
		return 1;
	}

	return 0;
}