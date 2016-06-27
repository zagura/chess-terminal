//
// Created by misiek on 27.06.16.
//

#include "Staunton.h"

namespace chess{
    std::string Staunton::toString() const{
        if(!placed){
            return "   ";
        }
        std::string result = "";
        result += (char)_colour;
        result += (char)_type;
        result += (char)_colour;
        return result;
    }
//    Staunton& Staunton::operator=(Staunton& s){
//        this->_colour = s._colour;
//        this->placed = s.placed;
//        this->_type = s._type;
//    }
}