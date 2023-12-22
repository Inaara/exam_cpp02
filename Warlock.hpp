#pragma once

#include <iostream>
#include <map>

#include "SpellBook.hpp"

class ASpell;

class ATarget;

class Warlock {
    private:
        std::string name;
        std::string title;
       // std::map<std::string, ASpell *> arr;

        SpellBook book;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
    
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell *spell_ptr);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &target_ref);
};

#include "ASpell.hpp"
#include "ATarget.hpp"