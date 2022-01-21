#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>

void Initboard(char board[ROW][COL], int row, int col);
void Dispalyboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);