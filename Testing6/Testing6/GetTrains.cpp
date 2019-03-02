#include"GetTrains.h"

pair<bool, vector<int>> getTrains(vector<TrainInfo> schedule, const string& city)
{
	bool isTickets = false;
	vector<int> trainNums;
	for (TrainInfo ti : schedule)
	{
		if (ti.getPunktDelivery() == city)
		{
			trainNums.push_back(ti.getTrainNum());
			if (ti.getTicket() == true)
			{
				isTickets = true;
			}
		}
	}

	return make_pair(isTickets, trainNums);
}