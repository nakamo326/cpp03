#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ScavTrap test("testname");
  test.attack("test target");
  test.takeDamage(10);
  test.beRepaired(5);
  test.guardGate();
  return 0;
}
