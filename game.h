#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3

#include<stdlib.h>//rand ������ͷ�ļ�
#include<time.h>//

//����
void InitBoard(char board[ROW][COL], int row, int col);

void displayboard(char board[ROW][COL],int row,int col);

void playermove(char board[ROW][COL], int row, int col);

void computermove(char board[ROW][COL], int row, int col);

//��������4����Ϸ��״̬ ���Ӯ��*�� ����Ӯ��#�� ƽ�֡�q�� ������Ϸ��c��

char iswin(char board[ROW][COL],int row,int col);

