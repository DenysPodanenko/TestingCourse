#include"DepTime.h"

vector<Time> getDepTime(const vector<TrainInfo>& schedule, const string& city, Time& ATime, Time& BTime)
{
	vector<Time> depTime;
	for (TrainInfo ti : schedule)
	{
		if (ti.getPunktDelivery() == city && ti.getDepatureTime() >= ATime && ti.getDepatureTime() <= BTime)
		{
			depTime.push_back(ti.getDepatureTime());
		}
	}

	return depTime;
}