#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"

class SpellBook {
    private:
        std::string name;
        std::string title;

        SpellBook(SpellBook const &other);
        SpellBook &operator=(SpellBook const &other);
    public:
        SpellBook();
        ~SpellBook();

        std::map<std::string, ASpell *> arr;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell *createSpell(std::string const &name);
};