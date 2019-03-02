#pragma once
#include<vector>
#include"TrainInfo.h"

using namespace std;

pair<bool, vector<int>> getTrains(vector<TrainInfo> schedule, const string& city);