//
// Created by misiek on 27.06.16.
//

#ifndef CHESS_STAUNTON_H
#define CHESS_STAUNTON_H

#include "commons.h"
#include <string>

namespace chess {
    class Staunton {
    public:
        std::string toString() const;
        Staunton() : placed(false), _type(EMPTY_STAUNTON), _colour(EMPTY_COLOUR){};
        Staunton(staunton __type, colour c) : placed(true), _type(__type), _colour(c){};
    private:

    protected:
        bool placed;
        staunton _type;
        colour _colour;

   //     Staunton &operator=(Staunton &s);
    };


}
#endif //CHESS_STAUNTON_H
