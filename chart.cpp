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
}