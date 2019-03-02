#define _CRT_SECURE_NO_WARNINGS

#include "TrainInfo.h"

TrainInfo::TrainInfo(): trainNum(0), punktDelivery(""), departureTime(Time()), ticket(0)
{
}

TrainInfo::TrainInfo(const int& trainNum, const std::string& punktDelivery, const Time& departureTime, const bool& ticket): trainNum(trainNum), punktDelivery(punktDelivery), departureTime(departureTime), ticket(ticket)
{
}

TrainInfo::TrainInfo(std::string& str)
{
	std::string pch;
	pch = strtok(&str[0], " ,.-");
	trainNum = std::stoi(pch);

	pch = strtok(NULL, " ,.-");
	punktDelivery = pch;

	pch = strtok(NULL, " ,.-");
	ticket = std::stoi(pch);

	pch = strtok(NULL, " ,.-");
	departureTime = Time(pch);
}

TrainInfo::~TrainInfo()
{
}

void TrainInfo::setTrainNum(const int& trainNum)
{
	this->trainNum = trainNum;
}
void TrainInfo::setPunktDelivery(const std::string& punktDelivery)
{
	this->punktDelivery = punktDelivery;
}
void TrainInfo::setDepatureTime(const Time& depatureTime)
{
	this->departureTime = departureTime;
}
void TrainInfo::setTicket(const bool& ticket)
{
	this->ticket = ticket;
}

int TrainInfo::getTrainNum()
{
	return trainNum;
}
std::string TrainInfo::getPunktDelivery()
{
	return punktDelivery;
}
Time TrainInfo::getDepatureTime()
{
	return departureTime;
}
bool TrainInfo::getTicket()
{
	return ticket;
}