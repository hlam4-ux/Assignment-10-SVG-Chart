#ifndef CHART_H
#define CHART_H
#include <string>
#include <vector>

using namespace std;

double findMax(const vector<double>& data);

vector<double> scaleData(const vector<double>& data);
vector<double> makeXCoordinates(int count);
string makePath(const vector<double>& x, const vector<double>& y);

#endif