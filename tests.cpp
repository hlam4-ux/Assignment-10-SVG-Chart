#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "chart.h"
#include "doctest.h"

using doctest::Approx;

TEST_CASE("findMax")
{
  vector<double> data = {2, 6, 4, 9, 20, 16};

  CHECK(findMax(data) == Approx(20));
}

TEST_CASE("scaleData")
{
  vector<double> data = {2, 6, 4, 9, 20, 16};
  vector<double> result = scaleData(data);

  CHECK(result[0] == Approx(50));
  CHECK(result[1] == Approx(150));
  CHECK(result[2] == Approx(100));
}

TEST_CASE("makeXCoordinates")
{
  vector<double> result = makeXCoordinates(6);

  CHECK(result[0] == Approx(0));
  CHECK(result[5] == Approx(500));
}

TEST_CASE("makePath")
{
  vector<double> x = {0, 100, 200};
  vector<double> y = {50, 150, 100};
}