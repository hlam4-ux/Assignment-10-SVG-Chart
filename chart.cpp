#include "chart.h"

double findMax(const vector<double>& data)
{
  double biggest = data[0];

  for (int i = 0; i < data.size(); i++) {
    if (data[i] > biggest) {
      biggest = data[i];
    }
  }

  return biggest;
}

vector<double> scaleData(const vector<double>& data)
{
  vector<double> result;

  double biggest = findMax(data);
  double scale = 500.0 / biggest;

  for (int i = 0; i < data.size(); i++) {
    result.push_back(data[i] * scale);
  }

  return result;
}

vector<double> makeXCoordinates(int count)
{
  vector<double> result;

  double step = 500.0 / (count - 1);
  for (int i = 0; i < count; i++) {
    result.push_back(i * step);
  }

  return result;
}

string makePath(const vector<double>& x, const vector<double>& y)
{
}