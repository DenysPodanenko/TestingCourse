#include<iostream>
#include<vector>
#include<fstream>
#include"TrainInfo.h"
#include"DepTime.h"
#include"GetTrains.h"

using namespace std;

void feelTrainInfo(vector<TrainInfo>& vec, const string& path)
{
	string line;
	ifstream myfile(path);

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			TrainInfo ti(line);
			vec.push_back(ti);
		}
		myfile.close();
	}
}

void main()
{
	string path = "text.txt";
	/*cin >> path;*/

	vector<TrainInfo> schedule;
	feelTrainInfo(schedule, path);
	
	Time ATime = Time(12, 0);
	Time BTime = Time(24, 0);
	vector<Time> depTime = getDepTime(schedule, "A", ATime, BTime);
	pair<bool, vector<int>> TTInfo = getTrains(schedule, "A");
}