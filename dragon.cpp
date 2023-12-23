#include "toad.hpp"
#include "bull.hpp"
#include "dragon.hpp"

Dragon::Dragon(const int& _x, const int& _y, const std::string& _name) 
{
    x = _x;
    y = _y;
    name = _name;
    status = true;
}

void Dragon::print(std::ostream& out) 
{
    out << *this;
}

 void Dragon::accept(NPC* attacker, const int& distance) {}

std::ostream& operator<<(std::ostream& out, const Dragon& other) 
{
    return out << "Dragon " << other.name << " {" << other.x << ", " << other.y << '}';
}
