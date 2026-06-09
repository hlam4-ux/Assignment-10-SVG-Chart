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

  outfile << "<svg viewBox=\"0 -500 500 500\" width=\"500\" height=\"500\" "
             "xmlns=\"http://www.w3.org/2000/svg\" style=\"border: 1px solid "
             "black;\">"
          << endl;
  outfile << "<g transform=\"scale(1 -1)\">" << endl;
}
