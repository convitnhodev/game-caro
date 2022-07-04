#include"caro.h"

int main()
{
	FixConsoleWindow();
	Textcolor(241);
	system("cls");
	menu();
	system("pause");
}


void AnTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void HienTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void FixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void Textcolor(int color)
{
	HANDLE k;
	k = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(k, color);
}

void GotoXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void PrintCaro2()
{
	Sleep(200);
	PlaySound(TEXT("nhac123.wav"), NULL, SND_FILENAME | SND_ASYNC);     //hàm phát nhạc 

	AnTroChuot();
	int x = 25, y = 0;
	Sleep(200);
	Textcolor(Red);          //đổi màu kí tự

	GotoXY(x - 8, y + 4);		   cout << " *************";
	GotoXY(x - 8, y + 5);          cout << "**************";
	GotoXY(x - 8, y + 6);          cout << "**************";
	GotoXY(x - 8, y + 7);          cout << "****";
	GotoXY(x - 8, y + 8);          cout << "****";
	GotoXY(x - 8, y + 9);          cout << "****";
	GotoXY(x - 8, y + 10);         cout << "****";
	GotoXY(x - 8, y + 11);         cout << "****";
	GotoXY(x - 8, y + 12);         cout << "**************";
	GotoXY(x - 8, y + 13);         cout << "**************";
	GotoXY(x - 8, y + 14);		   cout << " *************";
	Sleep(200);
	Textcolor(Yellow);
	GotoXY(x +8, y + 4);		     cout << "          ****				";
	GotoXY(x + 8 , y + 5);		     cout << "         ******               ";
	GotoXY(x  + 8 , y + 6);		     cout << "        ********              ";
	GotoXY(x  + 8 , y + 7);			 cout << "       ****  ****             ";
	GotoXY(x  + 8 , y + 8);			 cout << "      ****    ****            ";
	GotoXY(x  + 8, y + 9);			 cout << "     **************           ";
	GotoXY(x  + 8 , y + 10);		 cout << "    ****************          ";
	GotoXY(x  + 8 , y + 11);		 cout << "   ****          ****         ";
	GotoXY(x  + 8, y + 12);		     cout << "  ****            ****        ";
	GotoXY(x  + 8, y + 13);		     cout << " ****              ****       ";
	GotoXY(x  + 8, y + 14);		     cout << "****                ****      ";
	Sleep(200);
	Textcolor(Pink);

	GotoXY(x + 33+1, y + 4);		cout << "************     ";
	GotoXY(x + 33+1, y + 5);		cout << "*************    ";
	GotoXY(x + 33+1, y + 6);		cout << "****     ****    ";
	GotoXY(x + 33+1, y + 7);     	cout << "****     ****    ";
	GotoXY(x + 33+1, y + 8);	    cout << "*************    ";
	GotoXY(x + 33+1, y + 9);		cout << "************     ";
	GotoXY(x  + 33+1, y + 10);	    cout << "****    ****     ";
	GotoXY(x  + 33+1, y + 11);	    cout << "****     ****    ";
	GotoXY(x  + 33+1, y + 12);	    cout << "****      ****   ";
	GotoXY(x  + 33+1, y + 13);	    cout << "****       ****  ";
	GotoXY(x  + 33+1, y + 14);	    cout << "****        **** ";
	Sleep(200);
	Textcolor(Green);
	GotoXY(x + 57-3, y + 4);		 cout << " ************ ";
	GotoXY(x + 57 - 3, y + 5); 	     cout << "**************";
	GotoXY(x + 57 - 3, y + 6);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 7);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 8);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 9);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 10);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 11);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 12);		 cout << "****      ****";
	GotoXY(x + 57 - 3, y + 13);		 cout << "**************";
	GotoXY(x + 57 - 3, y + 14);		 cout << " ************ ";
	Textcolor(defaultColor);
	Sleep(5);
}
void about()
{
	PlaySound(TEXT("nhacgame.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	system("cls");
	AnTroChuot();
	int x = 25, y = 0;
	Sleep(200);
	Textcolor(Red);
	GotoXY(x + 0, y + 1);
	cout << "***    ***";
	GotoXY(x + 0, y + 2);
	cout << "***    ***";
	GotoXY(x + 0, y + 3);
	cout << "***    ***";
	GotoXY(x + 0, y + 4);
	cout << "**********";
	GotoXY(x + 0, y + 5);
	cout << "**********";
	GotoXY(x + 0, y + 6);
	cout << "***    ***";
	GotoXY(x + 0, y + 7);
	cout << "***    ***";
	GotoXY(x + 0, y + 8);
	cout << "***    ***";
	Textcolor(Yellow);
	Sleep(100);

	GotoXY(x + 14, y + 1);
	cout << " *********** ";
	GotoXY(x + 14, y + 2);
	cout << "*************";
	GotoXY(x + 14, y + 3);
	cout << "***";
	GotoXY(x + 14, y + 4);
	cout << "***";
	GotoXY(x + 14, y + 5);
	cout << "***";
	GotoXY(x + 14, y + 6);
	cout << "***";
	GotoXY(x + 14, y + 7);
	cout << "*************";
	GotoXY(x + 14, y + 8);
	cout << " *********** ";
	Textcolor(Pink);
	Sleep(100);

	GotoXY(x + 29, y + 1);
	cout << "***         ***";
	GotoXY(x + 29, y + 2);
	cout << "*****     *****";
	GotoXY(x + 29, y + 3);
	cout << "*** **   ** ***";
	GotoXY(x + 29, y + 4);
	cout << "***  ** **  ***";
	GotoXY(x + 29, y + 5);
	cout << "***   ***   ***";
	GotoXY(x + 29, y + 6);
	cout << "***         ***";
	GotoXY(x + 29, y + 7);
	cout << "***         ***";
	GotoXY(x + 29, y + 8);
	cout << "***         ***";
	Textcolor(Green + 1);
	Sleep(100);

	GotoXY(x + 47, y + 1);
	cout << "***      ***";
	GotoXY(x + 47, y + 2);
	cout << "***      ***";
	GotoXY(x + 47, y + 3);
	cout << "***      ***";
	GotoXY(x + 47, y + 4);
	cout << "***      ***";
	GotoXY(x + 47, y + 5);
	cout << "***      ***";
	GotoXY(x + 47, y + 6);
	cout << "***      ***";
	GotoXY(x + 47, y + 7);
	cout << "************";
	GotoXY(x + 47, y + 8);
	cout << " ********** ";

	Textcolor(Red + 1);
	Sleep(100);

	GotoXY(x + 65, y + 1);
	cout << " ***********";
	GotoXY(x + 65, y + 2);
	cout << "************";
	GotoXY(x + 65, y + 3);
	cout << "**";
	GotoXY(x + 65, y + 4);
	cout << "*********** ";
	GotoXY(x + 65, y + 5);
	cout << " ***********";
	GotoXY(x + 65, y + 6);
	cout << "          **";
	GotoXY(x + 65, y + 7);
	cout << "************";
	GotoXY(x + 65, y + 8);
	cout << "*********** ";
	Sleep(100);

	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);

	Textcolor(Yellow);
	GotoXY(x + 30, y + 12);
	cout << "ABOUT" << endl;
	Textcolor(Red - 2);
	GotoXY(x + 20, y + 13);
	cout << "DO AN GAME CARO - LOP 20CTT3 - HCMUS" << endl;
	GotoXY(x + 30, y + 14);
	cout << "NHOM 9" << endl;
	GotoXY(x + 20, y + 15);
	cout << "-> MSSV   : 20120496." << endl;
	GotoXY(x + 20, y + 16);
	cout << "-> Ho ten : NGUYEN CANH HUY." << endl;
	GotoXY(x + 20, y + 17);
	cout << "-> MSSV   : 20120488." << endl;
	GotoXY(x + 20, y + 18);
	cout << "-> Ho ten : THAI NGUYEN VIET HUNG." << endl;
	GotoXY(x + 20, y + 19);
	cout << "-> MSSV   : 20120484." << endl;
	GotoXY(x + 20, y + 20);
	cout << "-> Ho ten : VU HOANG." << endl;
	GotoXY(x + 20, y + 21);
	cout << "-> MSSV   : 20120467." << endl;
	GotoXY(x + 20, y + 22);
	cout << "-> Ho ten : NGUYEN PHUOC HAI." << endl;
	GotoXY(x + 20, y + 23);
	cout << "-> MSSV   : 20120423." << endl;
	GotoXY(x + 20, y + 24);
	cout << "-> Ho ten : NGO TRONG TIN." << endl;
	GotoXY(x + 20, y + 25);
	cout << "-> Lop    : 20CTT3." << endl;
	GotoXY(x + 20, y + 26);
	cout << "-> GV huong dan : TRUONG TOAN THINH " << endl;
	Textcolor(Yellow);
	GotoXY(x + 30, y + 28);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}

void MoveRight() {
	if (nowX < a[BOARD_SIZE - 1][BOARD_SIZE - 1].x) {     //con trỏ không vượt qua pham vi bàn cờ 
		nowX += 4;
		GotoXY(nowX, nowY);
	}
}

void MoveLeft() {
	if (nowX > a[0][0].x) {
		nowX -= 4;
		GotoXY(nowX, nowY);
	}
}
void MoveDown() {
	if (nowY < a[BOARD_SIZE - 1][BOARD_SIZE - 1].y) {
		nowY += 2;
		GotoXY(nowX, nowY);
	}
}

void MoveUp() {
	if (nowY > a[0][0].y) {
		nowY -= 2;
		GotoXY(nowX, nowY);
	}
}

void bangdiem1(int colorWin ) {
	GotoXY((BOARD_SIZE + 8) * 4, 3);
	Textcolor(5 + 241 + +colorWin);
	if (playWithBot == false)            //nếu không phải là playvsbot sẽ hiển thị player1 else player 
		cout << "PLAYER 1";
	else cout << "PLAYER";
	GotoXY((BOARD_SIZE + 7) * 4, 4);
	Textcolor(colorWin + 241);
	cout << "So quan X        : "; cout << dem1;    //dem1 sẽ đếm số quân cờ của x và hiển thị ra 
	GotoXY((BOARD_SIZE + 7) * 4, 5);
	cout << "So tran da thang : "; cout << point1;  //point1 hiển thị số điểm người chơi 
	if (dem1 <= dem2)
	{
		GotoXY((BOARD_SIZE + 8) * 4, 9);         //dùng đk số quân cờ mỗi bên đễ hiển thị luọt kế tiếp là của ai 
		cout << "X's TURN" << endl;
	}
	else
	{
		GotoXY((BOARD_SIZE + 8) * 4, 9);
		cout << "O's TURN" << endl;
	}
}

void bangdiem1phu(int colorWin ) {
	GotoXY((BOARD_SIZE + 8) * 4, 3);
	Textcolor(5 + 241 + +colorWin);
	if (playWithBot == false)
		cout << "PLAYER 1";
	else cout << "PLAYER";
	GotoXY((BOARD_SIZE + 7) * 4, 4);
	Textcolor(colorWin + 241);
	cout << "So quan X        : "; cout << dem1;
	GotoXY((BOARD_SIZE + 7) * 4, 5);
	cout << "So tran da thang : "; cout << point1;
	GotoXY((BOARD_SIZE + 8) * 4, 9);
	cout << "  X WIN  " << endl;       //bảng phụ dùng để in ra các hiệu ứng khi thắng 
}


void chiahang(int colerWin )      //chia rõ các hàng 
{
	GotoXY((BOARD_SIZE + 3) * 4, 6);
	cout << "______________________________________________________";
	GotoXY((BOARD_SIZE + 3) * 4, 11);
	cout << "______________________________________________________";
	GotoXY((BOARD_SIZE + 3) * 4, 16);
	cout << "______________________________________________________";
}

void bangdiem2(int colorWin ) {        
	GotoXY((BOARD_SIZE + 8) * 4, 13);
	Textcolor(5 + 241 + colorWin);
	if (playWithBot == false)
		cout << "PLAYER 2";
	else cout << "BOT  ";
	GotoXY((BOARD_SIZE + 7) * 4, 14);
	Textcolor(colorWin + 241);
	cout << "So quan O        : "; cout << dem2;
	GotoXY((BOARD_SIZE + 7) * 4, 15);
	cout << "So tran da thang : "; cout << point2;
	if (dem1 <= dem2)
	{
		GotoXY((BOARD_SIZE + 8) * 4, 9);
		cout << "X's TURN" << endl;

	}
	else
	{
		GotoXY((BOARD_SIZE + 8) * 4, 9);
		cout << "O's TURN" << endl;

	}
}

void bangdiem2phu(int colorWin ) {
	GotoXY((BOARD_SIZE + 8) * 4, 13);
	Textcolor(5 + 241 + colorWin);
	if (playWithBot == false)
		cout << "PLAYER 2";
	else cout << "BOT  ";
	GotoXY((BOARD_SIZE + 7) * 4, 14);
	Textcolor(colorWin + 241);
	cout << "So quan O        : "; cout << dem2;
	GotoXY((BOARD_SIZE + 7) * 4, 15);
	cout << "So tran da thang : "; cout << point2;
	GotoXY((BOARD_SIZE + 8) * 4, 9);
	cout << "  O WIN  " << endl;
}

void banghuongdan() {        //in ra các hướng dẫn chơi ngay trong màn hình bàn cờ 
	Textcolor(248);
	GotoXY((BOARD_SIZE + 5) * 4, 23);
	cout << "W - A - S - D : di chuyen";
	GotoXY((BOARD_SIZE + 5) * 4, 24);
	cout << "    Enter     : Select";
	GotoXY((BOARD_SIZE + 5) * 4, 25);
	cout << "    L - T     : Luu game, tai game";
}

void ResetData() {
	PlaySound(TEXT("nhac.wav"), NULL, SND_FILENAME | SND_ASYNC);
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			a[i][j].x = 4 * j + LEFT + 2;  // Trùng với hoành độ màn hình bàn cờ
			a[i][j].y = 2 * i + TOP + 1;   // Trùng với tung độ màn hình bàn cờ

			if (isLoad) continue;  //nếu load game thì không reset 
			a[i][j].c = 0;   // 0 nghĩa là chưa ai đánh dấu, nếu đánh dấu phải theo quy 
							//định như sau: -1 là lượt true đánh, 1 là lượt false đánh
		}
	}
	HienTroChuot();

	if (!isLoad) {    //nếu loadgame thì không gán lại biến đếm và turn 
		dem1 = dem2 = 0;
		turn = true;
	}

	_COMMAND = -1;   // Gán lượt và phím mặc định
	nowX = a[0][0].x; nowY = a[0][0].y;  // Thiết lập lại tọa độ hiện hành ban đầu
}


void DrawBoard(int pSize) {
	Textcolor(242);

	for (int i = 0; i < pSize * 2; i++)
	{
		// Ve cot phai
		Sleep(20);
		GotoXY(pSize * 4 + 1, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(186);
		else
			cout << char(182);
	}

	for (int i = 0; i < pSize * 2; i = i + 2)
	{
		// Dong thuong
		Sleep(20);
		GotoXY(1, i);
		for (int j = 0; j < pSize * 4; j++)
		{
			if (j % 4 == 0)
				cout << char(197);
			else
				cout << char(196);
		}
	}
	
	for (int i = 0; i < pSize * 2; i++)
	{
		// Ve cot trai
		Sleep(20);
		GotoXY(1, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(186);
		else
			cout << char(199);
	}

	for (int i = 1; i < pSize * 2; i = i + 2)
	{
		for (int j = 0; j < pSize * 4; j = j + 4)
		{
			// Cot thuong
			Sleep(20);
			GotoXY(j + 1, i);
			if (j == 0)
				continue;
			cout << char(179);
		}
	}

	GotoXY(1, 0);
	for (int i = 0; i < pSize * 4; i++)
	{
		// Ve dong dau
		Sleep(20);
		if (i % 4 == 0)
			cout << char(209);
		else
			cout << char(205);
	}
	GotoXY(1, 0); cout << char(201);
	GotoXY(pSize * 4 + 1, 0); cout << char(187);

	GotoXY(1, pSize * 2);
	for (int i = 0; i < pSize * 4; i++)
	{
		// Ve dong cuoi
		Sleep(20);
		if (i % 4 == 0)
			cout << char(207);
		else
			cout << char(205);
	}
	if (turn == false)
	{
		Textcolor(246);
		chiahang();
	}
	else
	{
		Textcolor(245);

	}
	chiahang();
	bangdiem1();
	bangdiem2();
	banghuongdan();

}

void DrawXO() {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (a[i][j].c != 0) {
				GotoXY(a[i][j].x, a[i][j].y);
				if (a[i][j].c == -1) {
					Textcolor(245);
					cout << "X";     //vẽ x vào tọa độ con trỏ 
				}
				else {
					Textcolor(246);
					cout << "O";    //vẽ o vào tọa độ con trỏ 
				}
			}
		}
	}
}

void StartGame() {

	Textcolor(241);
	system("cls");
	ResetData();   //lấy lại dữ liệu ban đầu 
	DrawBoard(BOARD_SIZE + 1);   //vẽ bàn cờ 
	if (isLoad) DrawXO();   //nếu là loadgame thì tiếp tục chơi 
	isLoad = false;
	GotoXY(a[0][0].x, a[0][0].y);   //nếu newgame con trỏ sẽ ở vị trí a00 
}

void ExitGame() {
	point1 = 0, point2 = 0;
	Textcolor(247);
	playWithBot = false;
	system("cls");
}

bool inBoard(int x, int y) {
	if (0 <= x && x < BOARD_SIZE && 0 <= y && y < BOARD_SIZE) return true;    //tọa độ con trỏ trong phạm vi bàn cờ 
	return false;
}

both check(int x, int y, int n, int m, bool ok) {
	int dem = 0; 
	int newX = x, newY = y;
	while (1) {
		newX = newX + n;   //dịch tọa độ theo hướng n 
		newY = newY + m;    //dịch tọa độ theo hướng m
		if (!inBoard(newX, newY)) break;   //nếu tọa độ mới không trong bàn cờ thì break 
		if (a[newX][newY].c == a[x][y].c) dem++;  
		else break;
	}
	if (ok == true) return{ newX, newY };
	return{ dem, bool(a[newX][newY].c != 0) };
}

both ans1, ans2;
int Count = 0, x, y;
bool rightRule;

void kiemtrahang(int a, int b, int c, int d) {
	ans1 = check(x, y, a, b), ans2 = check(x, y, c, d);
	Count = ans2.val + ans1.val + 1;   //số quân bên trái+số quân bên phải+1 quân ở giữa 
	rightRule = (ans1.ok && ans2.ok);
}

bool uutien() {
	if (Count >= 3 && !ans1.ok && !ans2.ok) return true;   //nếu đếm số quân người chơi từ 3 đến 4 quân 
	if (Count >= 4 && ((!ans1.ok && ans2.ok) || (ans1.ok && !ans2.ok))) return true;   //thì máy sẽ ưu tiện chặn lại 
	return false;
}

void themNuocDi(int a, int b, int c, int d) {    //máy sẽ thêm nước đi cho nó 
	both res1 = check(x, y, a, b, true), res2 = check(x, y, c, d, true);
	if (uutien()) {
		if (!ans1.ok) {
			if (inBoard(res1.val, res1.ok)) {
				roadOfBot1.push_back(res1);
			}
		}
		if (!ans2.ok) {
			if (inBoard(res2.val, res2.ok)) {
				roadOfBot1.push_back(res2);
			}
		}
	}
	else {
		if (!ans1.ok) {
			if (inBoard(res1.val, res1.ok)) {
				roadOfBot2.push_back(res1);
			}
		}
		if (!ans2.ok) {
			if (inBoard(res2.val, res2.ok)) {
				roadOfBot2.push_back(res2);
			}
		}
	}
}


int hasWinner() {
	y = (nowX - LEFT - 2) / 4;
	x = (nowY - TOP - 1) / 2;
	// ngang
	kiemtrahang(0, 1, 0, -1); 

	if (turn && playWithBot) {  //nếu đến luọt của O và đang ở chế độ playvsbot 
		themNuocDi(0, 1, 0, -1);  //thì máy sẽ thêm nước đi 
	}

	if (Count == 5 && !rightRule) return 1;   //nếu đếm số quân theo hàng đúng = 5 và k bị chặn sẽ return 1 báo chiến thắng 
	// dọc
	kiemtrahang(1, 0, -1, 0);
	if (turn && playWithBot) {       //tương tự như kiểm tra hàng ngang 
		themNuocDi(1, 0, -1, 0);
	}
	if (Count ==5 && !rightRule) return 2;
	// chéo
	kiemtrahang(1, 1, -1, -1);
	if (turn && playWithBot) {       //tương tự như kiểm tra hàng ngang 
		themNuocDi(1, 1, -1, -1);
	}
	if (Count ==5 && !rightRule) return 3;
	// chéo
	kiemtrahang(1, -1, -1, 1);
	if (turn && playWithBot) {             //tương tự như kiểm tra hàng ngang 
		themNuocDi(1, -1, -1, 1);
	}
	if (Count ==5 && !rightRule) return 4;

	return 0;
}

void hieuUng(int x, int y, int n, int m, int color) {
	int dem = 0; 

	int newX = x, newY = y;

	color = color % 200;    //hiệu ứng nhấp nháy đổi màu 
	GotoXY(a[newX][newY].x, a[newX][newY].y);
	Textcolor(color++);
	if (a[newX][newY].c == -1) cout << "X";
	else cout << "O";
	while (1) {
		Sleep(25); 
				  
		newX = newX + n;
		newY = newY + m;
		if (!inBoard(newX, newY)) break;
		if (a[newX][newY].c == a[x][y].c) dem++;
		else break;

		Textcolor(color = (color + 20) % 200);
		if (a[newX][newY].c == -1) {
			AnTroChuot();

			bangdiem1phu(color);
			GotoXY(a[newX][newY].x, a[newX][newY].y);
			cout << "X";
		}
		else {
			AnTroChuot();
			bangdiem2phu(color);
			GotoXY(a[newX][newY].x, a[newX][newY].y);
			cout << "O";
		}
	}
}

int color = 1;

void effectWin() {
	int dem = 0;
	int y = (nowX - LEFT - 2) / 4;
	int x = (nowY - TOP - 1) / 2;
	if (hasWinner() == 1) {     //nếu ==1 nghĩa là thắng theo hàng ngang 

		while (dem < 2)
		{
			hieuUng(x, y, 0, 1, color++);
			hieuUng(x, y, 0, -1, color++);
			dem++;
		}
	}
	if (hasWinner() == 2) { //nếu ==2 nghĩa là thắng theo hàng dọc 

		while (dem < 2)    // dùng đk biến đếm để chờ hiệu ứng 
		{
			hieuUng(x, y, 1, 0, color++);
			hieuUng(x, y, -1, 0, color++);
			dem++;
		}
	}
	if (hasWinner() == 3) {   //nếu ==3 nghĩa là thắng theo chéo 

		while (dem < 2)
		{
			hieuUng(x, y, 1, 1, color++);
			hieuUng(x, y, -1, -1, color++);
			dem++;
		}
	}
	if (hasWinner() == 4)    //nếu ==4 nghĩa là thắng theo chéo 
	{
		while (dem < 2)
		{
			hieuUng(x, y, -1, 1, color++);
			hieuUng(x, y, 1, -1, color++);
			dem++;
		}
	}
}

int ProcessFinish(int pWhoWin) {
	GotoXY((BOARD_SIZE + 7) * 4, 19);  // Nhảy tới vị trí 
									// thích hợp để in chuỗi thắng/thua/hòa						  
	Textcolor(7 + 239);
	switch (pWhoWin) {
	case -1:
		if (playWithBot == false)
			cout << "PLAYER 1 IS THE WINNER";
		if (playWithBot == true)
			cout << "YOU ARE THE WINNER";
		break;
	case 1:
		if (playWithBot == false)
			cout << "PLAYER 2 IS THE WINNER";
		if (playWithBot == true)
			cout << "YOU ARE THE LOSER. BOT WON";
		break;
	case 0:  cout << "DRAW";
		break;
	case 2:
		turn = !turn;  // Đổi lượt nếu không có gì xảy ra
	}
	GotoXY(nowX, nowY);  // Trả về vị trí hiện hành của con trỏ màn hình bàn cờ
	return pWhoWin;
}

int AskContinue() {
	PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	Textcolor(6 + 239);

	GotoXY((BOARD_SIZE + 6) * 4, 20);
	cout << "Nhan ENTER / tiep tuc";
	GotoXY((BOARD_SIZE + 6) * 4, 21);
	cout << "Nhan phim bat ki / tro ve menu chinh";
	while (!_kbhit())
		effectWin();
	return toupper(_getch());
}

bool hasDraw() {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (a[i][j].c == 0) return false; 
		}
	}
	return true;
}

int TestBoard()
{
	if (hasDraw()) return 0; //hòa 
	else
		if (hasWinner()) return (turn == true ? -1 : 1);  // -1 nghĩa là lượt ‘true’ thắng 
		else return 2;  // 2 nghĩa là chưa ai thắng
}

int CheckBoard(int pX, int pY) {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (a[i][j].x == pX && a[i][j].y == pY && a[i][j].c == 0) {
				if (turn == true) a[i][j].c = -1;   // Nếu lượt hiện hành là true thì c = -1
				else a[i][j].c = 1;  // Nếu lượt hiện hành là false thì c = 1
				return a[i][j].c;
			}
		}
	}
	return 0;
}


string fileName;
string str[1000];

void saveGame() {
	system("cls");


	system("cls");
	Textcolor(244);
	GotoXY(30, 9); cout << "  0000   0   0   0  0000      000     0    00   00   0000     ";
	GotoXY(30, 10); cout << "   0    000   0 0   0 0      0  00   000   0 0 0 0   0 0    ";
	GotoXY(30, 11); cout << " 0000  0   0   0    0000      000   0   0  0  0  0   0000      ";

	GotoXY(40, 13);
	Textcolor(241);
	cout << "NHAP TEN FILE GAME : ";
	cin >> fileName;      //nhâp tên file 
	ofstream inp(fileName);   
	inp << turn << " " << point1 << " " << dem1 << " " << point2 << " " << dem2 << " " << playWithBot << " ";  //lấy các dữ liệu cần lưu 
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			inp << a[i][j].c << " ";
		}
	}
	inp.close();


	ifstream has("textName.txt");  //bỏ tên file vào file textname.txt 
	string x;
	while (has >> x) if (x == fileName) return;
	has.close();

	ofstream f;
	f.open("textName.txt", ios::app);
	f << fileName << '\n';
	f.close(); 
}



void loadGame() {
	system("cls");
	Textcolor(244);
	GotoXY(30, 9); cout << "00    00     0    000       000     0    00   00   0000     ";
	GotoXY(30, 10); cout << "00   0  0   000   0  0     0  00   000   0 0 0 0   0 0    ";
	GotoXY(30, 11); cout << "000   00   0   0  000       000   0   0  0  0  0   0000      ";

	GotoXY(35, 13); cout << "File game before";
	GotoXY(40, 14);
	ifstream has("textName.txt");  //hiển thị ra các tên có trong textname.txt 
	int dem = 0;
	while (has >> str[++dem]) cout << str[dem], GotoXY(40, 14 + dem);;
	has.close();

	while (1) {
		GotoXY(40, 15 + dem);
		Textcolor(7 + 241);
		cout << "NHAP TEN FILE GAME :    ";
		cin >> fileName;

		bool ok = false;
		for (int i = 1; i <= dem; i++) {
			if (str[i] == fileName) ok = true;
		}

		if (!ok) {   //nếu nhập sai tên file sẽ hiển thị file không tồn tại 
			GotoXY(40, 15 + dem);
			Textcolor(248); 
			cout << "File game khong ton tai                                              ";
			int x = _getch();
			if (x == 27) {
				isLoad = false;
				system("cls");
				return;
			}
		}
		else break;
	}


	ifstream out(fileName); // load du lieu tu file
	out >> turn >> point1 >> dem1 >> point2 >> dem2 >> playWithBot;
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			out >> a[i][j].c;
		}
	}

	isLoad = true;
}

int diemTanCong() {  //lấy điểm tấn công 
	int res = 0;
	if (Count >= 5 && !(ans1.ok && ans2.ok)) res += 100;
	if (Count >= 4 && !ans1.ok && !ans2.ok) res += 20;
	if (Count >= 3 && !ans1.ok && !ans2.ok) res += 5;
	if (Count >= 4 && !(ans1.ok && ans2.ok)) res += 5;
	if (Count >= 3 && !(ans1.ok && ans2.ok)) res += 1;
	if (Count >= 2 && !ans1.ok && !ans2.ok) res += 1;

	return res;
}

bool tanCong() {
	int preX = -1, preY = -1, ans = 0;
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (a[i][j].c != 0) continue;
			a[i][j].c = 1;
			nowX = a[i][j].x;
			nowY = a[i][j].y;


			y = (nowX - LEFT - 2) / 4;
			x = (nowY - TOP - 1) / 2;

			int res = 0;
			kiemtrahang(0, 1, 0, -1);
			res += diemTanCong();

			kiemtrahang(1, 0, -1, 0);
			res += diemTanCong();

			kiemtrahang(1, 1, -1, -1);
			res += diemTanCong();

			kiemtrahang(1, -1, -1, 1);
			res += diemTanCong();

			if (ans < res) {
				ans = res;
				preX = i;
				preY = j;
			}

			a[i][j].c = 0;
		}
	}
	if (ans == 0) return false;
	_POINT& c = a[preX][preY];
	nowX = c.x;
	nowY = c.y;
	c.c = 1;
	GotoXY(nowX, nowY);
	return true;
}

void Bot() {
	if (roadOfBot1.size()) {
		int ran = rand() % roadOfBot1.size();  //random cách đi cho máy 
		_POINT& c = a[roadOfBot1[ran].val][roadOfBot1[ran].ok];  //máy đánh vào vị trí đã được random 
		c.c = 1;
		GotoXY(c.x, c.y);

		Textcolor(7 + 239);
		cout << "O";
		Textcolor(6 + 239);
		chiahang();
		dem2++;
		bangdiem2();



		nowX = c.x;
		nowY = c.y;
	}
	else {
		if (tanCong()) {

			Textcolor(7 + 239);
			cout << "O";
			Textcolor(6 + 239);
			chiahang();
			dem2++;
			bangdiem2();
		}
		else
			if (roadOfBot2.size()) {
				int ran = rand() % roadOfBot2.size();
				_POINT& c = a[roadOfBot2[ran].val][roadOfBot2[ran].ok];
				c.c = 1;
				GotoXY(c.x, c.y);

				Textcolor(7 + 239);
				cout << "O";
				Textcolor(6 + 239);
				chiahang();
				dem2++;
				bangdiem2();

				nowX = c.x;
				nowY = c.y;
			}
			else {
				_POINT c;
				bool ok = false;
				for (int i = 0; i < BOARD_SIZE; i++) {
					for (int j = 0; j < BOARD_SIZE; j++) {
						if (a[i][j].c == 0) c = a[i][j];
						if (a[i][j].c == -1) { ok = true; break; }
					}
					if (ok) break;
				}
			

				y = (c.x - LEFT - 2) / 4;
				x = (c.y - TOP - 1) / 2;
				a[x][y].c = 1;
				GotoXY(c.x, c.y);

				Textcolor(7 + 239);
				cout << "O";
				Textcolor(6 + 239);
				chiahang();
				dem2++;
				bangdiem2();

				nowX = c.x;
				nowY = c.y;
			}
	}
	roadOfBot1.clear();
	roadOfBot2.clear();

}



bool checkWinOrLose() {
	switch (ProcessFinish(TestBoard())) {
	case -1: case 1: case 0:
		if (AskContinue() != 13) {
			ExitGame(); return 1;
		}
		else {
			(turn) ? point1++ : point2++;
			StartGame();
		}

	}
	return 0;
}


int newGame() {
	AnTroChuot();
	system("Color F3");
	

	StartGame();
	bool validEnter = true;
	while (1) {
		if (playWithBot && turn == false) {
			int x = nowX, y = nowY;
			Bot();
			if (checkWinOrLose()) return 0;
			nowX = x, nowY = y;
			GotoXY(nowX, nowY);
		}

		_COMMAND = toupper(_getch());  //command: nhan ki tu ma nguoi dung nhap
		switch (_COMMAND) {  //toupper: chuyen ki tu sang viet hoa
		case 27:
			ExitGame();
			return 0;
		case 'A':
		{
			MoveLeft();
			PlaySound(TEXT("dichuyen.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		}
		case 'W': {
			MoveUp();
			PlaySound(TEXT("dichuyen.wav"), NULL, SND_FILENAME | SND_ASYNC);
			; break;
		}
		case 'S': {
			MoveDown();
			PlaySound(TEXT("dichuyen.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break; }
		case 'D': {
			MoveRight();
			PlaySound(TEXT("dichuyen.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break; }
		case 'L': saveGame(); ExitGame(); return 0;
		case 'T': loadGame();
			isLoad = true;
			StartGame();
			break;
			chiahang();

		case 13: { 
			switch (CheckBoard(nowX, nowY)) {
			case -1:
				Textcolor(6 + 239);
				cout << "X";
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				Textcolor(7 + 239);
				chiahang();
				dem1++;
				bangdiem1();
				break;
			case 1:

				Textcolor(7 + 239);
				cout << "O";
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				Textcolor(6 + 239);

				chiahang();

				dem2++;
				bangdiem2();

				break;
			case 0: validEnter = false;  //khi đánh vào ô đã đánh rồi 
			}
			//kiểm tra xử lí thắng/thua/hòa để tiếp tục 
			if (validEnter == true) {   
				if (checkWinOrLose()) return 0;
			}
			validEnter = true;  //mở khóa 
		}

		}
	}
}

string chuoi[] = { "New Game (PVP)","New Game vs Bot", "Load Game", "Help" ,"About","Exit" };
void in(int x, int y) {
	AnTroChuot();
	for (int i = 18; i <= 23; i++) {
		if (y == i) Textcolor(12 + 241);
		else Textcolor(7 + 241);
		GotoXY(x, i); cout << chuoi[i - 18];
	}
}

void Help()
{
	PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);

	system("cls");
	AnTroChuot();
	int x = 25, y = 0;
	Sleep(50);
	Textcolor(Red);

	GotoXY(x + 0, y + 3);
	cout << "***    ***";
	GotoXY(x + 0, y + 4);
	cout << "***    ***";
	GotoXY(x + 0, y + 5);
	cout << "***    ***";
	GotoXY(x + 0, y + 6);
	cout << "**********";
	GotoXY(x + 0, y + 7);
	cout << "**********";
	GotoXY(x + 0, y + 8);
	cout << "***    ***";
	GotoXY(x + 0, y + 9);
	cout << "***    ***";
	GotoXY(x + 0, y + 10);
	cout << "***    ***";
	Textcolor(Yellow);
	Sleep(100);
	GotoXY(x + 14, y + 3);
	cout << " *********** ";
	GotoXY(x + 14, y + 4);
	cout << "*************";
	GotoXY(x + 14, y + 5);
	cout << "***";
	GotoXY(x + 14, y + 6);
	cout << "***";
	GotoXY(x + 14, y + 7);
	cout << "***";
	GotoXY(x + 14, y + 8);
	cout << "***";
	GotoXY(x + 14, y + 9);
	cout << "*************";
	GotoXY(x + 14, y + 10);
	cout << " *********** ";

	Textcolor(Pink);
	Sleep(100);

	GotoXY(x + 29, y + 3);
	cout << "***         ***";
	GotoXY(x + 29, y + 4);
	cout << "*****     *****";
	GotoXY(x + 29, y + 5);
	cout << "*** **   ** ***";
	GotoXY(x + 29, y + 6);
	cout << "***  ** **  ***";
	GotoXY(x + 29, y + 7);
	cout << "***   ***   ***";
	GotoXY(x + 29, y + 8);
	cout << "***         ***";
	GotoXY(x + 29, y + 9);
	cout << "***         ***";
	GotoXY(x + 29, y + 10);
	cout << "***         ***";

	Textcolor(Green + 1);
	Sleep(100);
	GotoXY(x + 47, y + 3);
	cout << "***      ***";
	GotoXY(x + 47, y + 4);
	cout << "***      ***";
	GotoXY(x + 47, y + 5);
	cout << "***      ***";
	GotoXY(x + 47, y + 6);
	cout << "***      ***";
	GotoXY(x + 47, y + 7);
	cout << "***      ***";
	GotoXY(x + 47, y + 8);
	cout << "***      ***";
	GotoXY(x + 47, y + 9);
	cout << "************";
	GotoXY(x + 47, y + 10);
	cout << " ********** ";

	Textcolor(Red + 1);
	Sleep(100);
	GotoXY(x + 65, y + 3);
	cout << " ***********";
	GotoXY(x + 65, y + 4);
	cout << "************";
	GotoXY(x + 65, y + 5);
	cout << "**";
	GotoXY(x + 65, y + 6);
	cout << "*********** ";
	GotoXY(x + 65, y + 7);
	cout << " ***********";
	GotoXY(x + 65, y + 8);
	cout << "          **";
	GotoXY(x + 65, y + 9);
	cout << "************";
	GotoXY(x + 65, y + 10);
	cout << "*********** ";
	Sleep(100);


	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);
	GotoXY(x + 0, y + 7);


	Textcolor(Yellow);
	GotoXY(60, 18);
	cout << "HELP";
	Textcolor(Red - 2);
	GotoXY(29, 19);
	cout << "HUONG DAN" << endl;
	GotoXY(29, 20);
	cout << "1. Ban co gom 13x13 o vuong." << endl;
	GotoXY(29, 21);
	cout << "2. Su dung cac phim W A S D de di chuyen va Enter de danh." << endl;
	GotoXY(29, 22);
	cout << "3. Luat choi cu du 5 quan co X hoac O theo hang ngang, doc, cheo se chien thang." << endl;
	GotoXY(29, 23);
	cout << "4. Luat choi tuan theo quy dinh chan hai dau khong chien thang " << endl;
	GotoXY(29, 24);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	Textcolor(Yellow);
	GotoXY(60, 25);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}

void menu() {
	int x = 50, y = 18;
	int check = 1;
	PrintCaro2();
	Textcolor(121 + 241);
	in(x, y);
	GotoXY(40, 24); cout << "      W - S : Move";
	GotoXY(40, 25); cout << "      Enter : Select ";


	while (check) {
		if (_kbhit()) {
			switch (_getch()) {
			case 'w':
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y > 18) GotoXY(x, --y);
				in(x, y);
				break;
			case 's':
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y < 23) GotoXY(x, ++y);
				in(x, y);
				break;
			case 13:
				if (y == 18) {
					HienTroChuot();
					newGame();
					PrintCaro2();
					in(x, y);
					break;
				}
				if (y == 19) {
					HienTroChuot();
					playWithBot = true;
					newGame();
					playWithBot = false;
					PrintCaro2();
					in(x, y);
					break;
				}
				if (y == 20) {
					HienTroChuot();
					loadGame();
					if (isLoad) newGame();
					PrintCaro2();

					in(x, y);
					break;
				}
				if (y == 21) {
					Help();
					PrintCaro2();

					in(x, y);
					break;
				}
				if (y == 22)
				{
					about();
					PrintCaro2();
					in(x, y);
					break;
				}
				if (y == 23) {
					exit(0);
				}
				break;
			}
		}
	}
}




