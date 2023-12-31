#include "factory.hpp"
#include "dragon.hpp"
#include "bull.hpp"
#include "toad.hpp"
#include <memory>

std::shared_ptr<NPC> factory(std::istream& in) 
{
    std::string type, name;
    size_t x, y;
    char c;
    in >> type >> name >> c >> x >> c >> y >> c;
    std::shared_ptr<NPC> res;
    if (type == "Dragon") 
    {
        res = std::make_shared<Dragon>(x, y, name);
    }
    else if (type == "Toad") 
    {
        res = std::make_shared<Toad>(x, y, name);
    }
    else if (type == "Bull") 
    {
        res = std::make_shared<Bull>(x, y, name);
    }
    else if (type != "") 
    {
        std::cerr << "Unknown type" << std::endl;
    }
    return res;
}

std::shared_ptr<NPC> factory(const std::string& type, const std::string& name, const int& x, const int& y) 
{
    std::shared_ptr<NPC> res;
    if (type == "Dragon") 
    {
        res = std::make_shared<Dragon>(x, y, name);
    }
    else if (type == "Toad") 
    {
        res = std::make_shared<Toad>(x, y, name);
    }
    else if (type == "Bull") 
    {
        res = std::make_shared<Bull>(x, y, name);
    }
    else 
    {
        std::cerr << "Unknown type" << std::endl;
    }
    return res;
}
