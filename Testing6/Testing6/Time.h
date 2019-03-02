#include<string>

#pragma once
class Time
{
public:
	Time();
	Time(const int& hours, const int& minutes);
	Time(std::string& stime);
	~Time();

	bool operator >= (Time& time);
	bool operator <= (Time& time);
	int getHours();
	int getMinutes();

private:
	int hours;
	int minutes;
};

