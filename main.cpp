#include <iostream>
#include <vector>

using namespace std;

enum Color_t {RED, BLUE};

struct Point_t{
    int row, col;
};

struct Token_t{
    Color_t color;
    Point_t location;
};

struct Move_t{
    Token_t token;
    Point_t destination;
};

Move_t Move(vector<Token_t> pieces, Color_t turn){
    Move_t move;
    if(turn == RED){

    }
    else if(turn == BLUE){


    }

    return move;
}

bool isSafe(Token_t curr, vector<Token_t>pieces){
    bool safety = true;
    if(curr.location.col == pieces[0].location.col){
        if(curr.location.row == pieces[0].location.row + 1 || curr.location.row == pieces[0].location.row - 1){
            if()
        }
    }
    else if(curr.location.row == pieces[0].location.row){
        if(curr.location.col == pieces[0].location.col + 1 || curr.location.col == pieces[0].location.col - 1){
            if()
        }
    }
    return safety;
}