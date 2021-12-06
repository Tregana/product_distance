#include <product_distance>
int _Volumes_build_product_distance_test_product_distance(int, char*[]) noexcept
{
  std::array<float, 4> v{5.0f, 4.0f, 3.0f, 2.0f};
  if (const auto rval{tregana::product_distance<float>(v)}; rval < 13.9f or 14.1f < rval)
    return 1;
  return 0;
}
