#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) {
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it_begin = book.arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = book.arr.end();
    while (it_begin != it_end) {
        delete it_begin->second;
        ++it_begin;
    }
    book.arr.clear();
}

std::string const &Warlock::getName() const {
    return this->name;
}

std::string const &Warlock::getTitle() const {
    return this->title;
}

void Warlock::setTitle(std::string const &title) {
    this->title = title;
}

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
    book.forgetSpell(name);
//    std::map<std::string, ASpell *>::iterator it = arr.find(name);
//    if (it != arr.end())
//        delete it->second;
//    arr.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &target) {
    ASpell *spell = book.createSpell(name);
    if (spell)
        spell->launch(target);
}