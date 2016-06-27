//
// Created by misiek on 27.06.16.
//

#include <iostream>
#include "Board.h"

using std::string;
namespace chess{
    std::string horizontal_line = "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n";
    std::string header_line = "|     |  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |     |\n";
    std::ostream& operator <<(std::ostream& stream, const Board& b){
        stream<<horizontal_line;
        stream<<header_line;
        int row_number = size;
        for(auto outer = b.board.begin(); outer != b.board.end(); outer++){
            stream<<horizontal_line;
            stream<<std::string("|  ");
            stream<<std::to_string(row_number);
            stream<<std::string("  ");
            for(auto inner = outer->begin(); inner != outer->end(); inner++){
                std::cerr<<outer->size()<<std::endl;
                stream<<std::string("| ")<<inner->toString()<<string(" ");
            }
            stream<<string("|  ");
            stream<<std::to_string(row_number);
            stream<<string("  |\n");
            row_number--;
        }
        stream<<horizontal_line;
        stream<<header_line;
        stream<<horizontal_line;
        return stream;
    }

    Board::Board() {
        board = std::array< std::array<Staunton, size>, size>();
        for(auto row = board.begin(); row != board.end(); row++){
            for(auto element = row->begin(); element != row->end(); element++) {
                *element = Staunton();
            }
        }

    }
    Board::Board(bool set){
        if(set){
            int row_no = 0;
            for(auto row = board.begin(); row != board.end(); row++){
                if(row_no > 1 && row_no < 6) {
                    for (auto element = row->begin(); element != row->end(); element++) {
                        *element = Staunton();
                    }
                }
                if(row_no == 6){
                    for (auto element = row->begin(); element != row->end(); element++) {
                        *element = Staunton(PAWN, WHITE);
                    }
                }
                if(row_no == 1){
                    for (auto element = row->begin(); element != row->end(); element++) {
                        *element = Staunton(PAWN, BLACK);
                    }
                }
                if(row_no == 0){
                    fill_row(*row, BLACK);
                }
                if(row_no == 7){
                    fill_row(*row, WHITE);
                }
                row_no++;
            }
        }
    }

    void Board::fill_row(std::array<Staunton, 8>& row, colour colour) const {
        row[0] = Staunton(ROOK, colour);
        row[7] = Staunton(ROOK, colour);
        row[1] = Staunton(KNIGHT, colour);
        row[6] = Staunton(KNIGHT, colour);
        row[2] = Staunton(BISHOP, colour);
        row[5] = Staunton(BISHOP, colour);
        row[3] = Staunton(QUEEN, colour);
        row[4] = Staunton(KING, colour);
    }


}