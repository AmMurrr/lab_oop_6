#include "toad.hpp"
#include "bull.hpp"
#include "dragon.hpp"

Toad::Toad(const int& _x, const int& _y, const std::string& _name) 
{
    x = _x;
    y = _y;
    name = _name;
    status = true;
}

void Toad::print(std::ostream& out) 
{
    out << *this;
}

void Toad::accept(NPC* attacker, const int& distance) 
{
    if (status && dynamic_cast<Bull*>(attacker))
    {
        bool win = is_close(*attacker, distance);
        if (win) status = false;

        notify(attacker, win);
    }
}

std::ostream& operator<<(std::ostream& out, const Toad& other) 
{
    return out << "Toad " << other.name << " {" << other.x << ", " << other.y << '}';
}
