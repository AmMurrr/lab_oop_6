#pragma once
#include "NPC.hpp"

class Toad: public NPC 
{
    public:
        Toad(const int&, const int&, const std::string&);

        void print(std::ostream&) override;

        void accept(NPC*, const int&) override;

        friend std::ostream& operator<<(std::ostream&, const Toad&);
};
