#include <print>
#include <mp-units/systems/si.h>
#include <mp-units/systems/angular.h>

using namespace mp_units;

using namespace mp_units::si::unit_symbols;

int main()
{
    quantity<si::metre> length = 3 * m;
    quantity<angular::degree> de = 3 * angular::degree;
    quantity<mA> current = 3 * mA;
    quantity<angular::revolution> round = 3 * angular::revolution;
    std::println("{}, {}, {}, {}", length, de, current, round);
    return 0;
}
