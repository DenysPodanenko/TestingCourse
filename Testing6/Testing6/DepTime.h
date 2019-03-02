#pragma once
#include<vector>
#include<string>
#include"TrainInfo.h"
#include"Time.h"

using namespace std;

vector<Time> getDepTime(const vector<TrainInfo>& schedule, const string& city, Time& ATime, Time& BTime);