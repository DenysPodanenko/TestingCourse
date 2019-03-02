#include<string>
#include<ctime>
#include<stdio.h>
#include<iostream>
#include"Time.h"

#pragma once
class TrainInfo
{
public:
	TrainInfo();
	TrainInfo(const int& trainNum, const std::string& punktDelivery, const Time& departureTime, const bool& ticket);
	TrainInfo(std::string& str);
	~TrainInfo();

	void setTrainNum(const int& trainNum);
	void setPunktDelivery(const std::string& punktDelivery);
	void setDepatureTime(const Time& depatureTime);
	void setTicket(const bool& ticket);

	int getTrainNum();
	std::string getPunktDelivery();
	Time getDepatureTime();
	bool getTicket();

private:
	int trainNum;
	std::string punktDelivery;
	Time departureTime;
	bool ticket;
};

