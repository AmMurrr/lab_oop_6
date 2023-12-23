#include "toad.hpp"
#include "bull.hpp"
#include "dragon.hpp"

Bull::Bull(const int& _x, const int& _y, const std::string& _name) 
{
    x = _x;
    y = _y;
    name = _name;
    status = true;
}

void Bull::print(std::ostream& out) 
{
    out << *this;
}

void Bull::accept(NPC* attacker, const int& distance) 
{
    if (status && dynamic_cast<Dragon*>(attacker)) 
    {
        bool win = is_close(*attacker, distance);
        if (win) status = false;
        
        notify(attacker, win);
    }
}

std::ostream& operator<<(std::ostream& out, const Bull& other) 
{
    return out << "Bull " << other.name << " {" << other.x << ", " << other.y << '}';
}
