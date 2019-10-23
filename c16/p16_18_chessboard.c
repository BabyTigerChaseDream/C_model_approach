#include<stdio.h>

// a) 
/*
typedef enum {
    PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY,
}Piece ;
typedef enum {
    B, W,
}Color;
*/

typedef enum _Piece {
    PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY,
}Piece;

typedef enum _Color {
    B, W,
}Color;

struct Square{
 Piece piece;
 Color color;

 enum _Piece _piece;
 enum _Color _color;

/*
enum {
    PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY,
}Piece ;

enum {
    B, W,
}Color;
*/

};

struct Square board[8][8] = { 
    {PAWN, B}, {KNIGHT, B},{BISHOP, B},{ROOK, B},{QUEEN, B},{KING, B},{EMPTY, B},}; 

void main(void)
{


}
