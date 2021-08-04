#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// need to "virtual" in claptrap constructor?

int main(void) {
  ScavTrap test("testname");
  test.attack("test target");
  test.takeDamage(10);
  test.beRepaired(5);
  test.guardGate();
  return 0;
}
