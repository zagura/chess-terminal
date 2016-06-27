//
// Created by misiek on 27.06.16.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include <array>
#include "Staunton.h"
#include "commons.h"

namespace chess{
        const int size = 8;
        class Board {

        private:
        public:
            std::array < std::array < Staunton, size>, size> board;
            Board();
            Board(bool set);
            void fill_row(std::array<Staunton, 8> &row, colour colour) const;
        };
    std::ostream& operator<<(std::ostream& stream, const Board& b);

}

#endif //CHESS_BOARD_H
