#include <print>
#include <mp-units/systems/si.h>
#include <mp-units/systems/angular.h>

using namespace mp_units;

using namespace mp_units::si::unit_symbols;

int main()
{
    quantity<si::metre, float> length = 3 * m;
    quantity<angular::degree, float> de = 3 * angular::degree;
    std::println("{}, {}", length, de);
    return 0;
}
