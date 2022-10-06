#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3

#include<stdlib.h>//rand 函数的头文件
#include<time.h>//

//声明
void InitBoard(char board[ROW][COL], int row, int col);

void displayboard(char board[ROW][COL],int row,int col);

void playermove(char board[ROW][COL], int row, int col);

void computermove(char board[ROW][COL], int row, int col);

//告诉我们4种游戏的状态 玩家赢‘*’ 电脑赢‘#’ 平局‘q’ 继续游戏‘c’

char iswin(char board[ROW][COL],int row,int col);

