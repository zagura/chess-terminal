//
// Created by misiek on 27.06.16.
//

#ifndef CHESS_COMMONS_H
#define CHESS_COMMONS_H

namespace chess {
    enum colour {
        BLACK = 'c',        // c - czarny
        WHITE = 'b',        // b - biały
        EMPTY_COLOUR = ' '
    };

    enum staunton {
        KING = 'K',
        QUEEN = 'H',
        ROOK = 'W',
        KNIGHT = 'S',
        BISHOP = 'G',
        PAWN = 'P',
        EMPTY_STAUNTON = ' '
    };
}
#endif //CHESS_COMMONS_H
