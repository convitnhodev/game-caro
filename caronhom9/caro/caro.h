#include "Windows.h"
#include "iostream"
#include "stdio.h"
#include "conio.h"
#include "ctype.h"
#include "mmsystem.h"
#include "stdlib.h"
#include <string>
#include <fstream>
#include <vector>
#include <deque>
#include <cstdlib>

using namespace std;
#define BOARD_SIZE 12
#define LEFT 3
#define TOP 1
#define Black			0
#define DarkBlue		1
#define DarkGreen		2
#define DarkCyan		3
#define DarkRed			4
#define DarkPink		5
#define DarkYellow		6
#define DarkWhite		7
#define Grey			8
#define Blue			9
#define Green			249
#define Cyan			11
#define Red				251
#define Pink			252
#define Yellow			253
#define White			15
#define defaultColor		7

#pragma comment (lib, "winmm.lib")
struct _POINT { int x, y, c; };
struct both { int val; int ok; };
_POINT a[BOARD_SIZE][BOARD_SIZE];
bool turn;
int _COMMAND;
int nowX, nowY;
int point1 = 0, point2 = 0;
int dem1 = 0, dem2 = 0;
bool needSound = true;
bool isLoad = false;
bool playWithBot = false;

vector<both> roadOfBot1, roadOfBot2, duongTanCong;

void AnTroChuot();
void HienTroChuot();
void FixConsoleWindow();
void Textcolor(int color);
void GotoXY(int x, int y);
void PrintCaro2();
void about();
void MoveRight();
void MoveLeft();
void MoveDown();
void MoveUp();
void bangdiem1(int colorWin = 7);
void bangdiem1phu(int colorWin = 7);
void chiahang(int colerWin = 7);
void bangdiem2(int colorWin = 7);
void bangdiem2phu(int colorWin = 7);
void banghuongdan();
void ResetData();
void DrawBoard(int pSize);
void DrawXO();
void StartGame();
void ExitGame();
bool inBoard(int x, int y);
both check(int x, int y, int n, int m, bool ok = false);
void kiemtrahang(int a, int b, int c, int d);
bool uutien();
void themNuocDi(int a, int b, int c, int d);
int hasWinner();
void hieuUng(int x, int y, int n, int m, int color);
void effectWin();
int ProcessFinish(int pWhoWin);
int AskContinue();
bool hasDraw();
int TestBoard();
int CheckBoard(int pX, int pY);
void saveGame();
void loadGame();
int diemTanCong();
bool tanCong();
void Bot();
bool checkWinOrLose();
int newGame();
void Help();
void menu();
