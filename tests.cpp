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
}
