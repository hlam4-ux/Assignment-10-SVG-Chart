#include "chart.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  ifstream infile("data.txt");

  vector<double> data;
  double value;

  while (infile >> value) {
    data.push_back(value);
  }

  vector<double> y = scaleData(data);
  vector<double> x = makeXCoordinates(data.size());
  string path = makePath(x, y);

  ofstream outfile("chart.svg");

  outfile <<
}
