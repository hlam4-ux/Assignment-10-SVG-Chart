#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "chart.h"
#include "doctest.h"

using doctest::Approx;

TEST_CASE("findMax")
{
  vector<double> data = {2, 6, 4, 9, 20, 16};

  CHECK(findMax(data) == 20);
}
