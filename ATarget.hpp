#pragma once

#include <iostream>

class ASpell;
#include "ASpell.hpp"

class ATarget {
    private:
        std::string type;
    public:
        ATarget();
        ATarget(std::string const &title);
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
        virtual ~ATarget();

        std::string const &getType() const;

        void getHitBySpell(ASpell const &spell) const;

        virtual ATarget *clone() const = 0;
};
