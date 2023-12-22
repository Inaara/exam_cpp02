#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
    private:
        std::map<std::string, ATarget *> arr;
        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &other);
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget *createTarget(std::string const &type);      
};