// 4주차 과제.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <bangtal.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>
SceneID scene1;
ObjectID white, startButton, endButton, back, p0, p1, p2, p3, p4, p5, p6 ,p7 ;
clock_t t1, t2;

ObjectID createObject(const char* image, SceneID scene, int x, int y) {
	ObjectID object = createObject(image);
	locateObject(object, scene, x, y);
	showObject(object);
	return(object);
}


int X[6] = { 0, 200, 340, 400, 540, 740 };
int Y[6] = { 0, 120, 200, 320, 400, 520 };

int a;
int b;
int q;
int w;
int e;
int r;
int t;
int k;
int u;
int i;
int o;
int p;
int s;
int d;
int f;
int g;
int h;
int j;


void ending() {
	if (q == X[5] && w == Y[1] && e == X[4] && r == Y[5] && t == X[5] && k == Y[5] && u == X[2] && i == Y[3] && o == X[4] && p == Y[3] && s == X[5] && d == Y[3] && f == X[2] && g == Y[1] && h == X[4] && j == Y[1])
	{
		back = createObject("av2.png", scene1, 340, 120);
		setObjectImage(white, "av2-001.png");
		showObject(back);
		setObjectImage(startButton, "restart.png");
		showObject(startButton);
		showObject(endButton);
		t2 = clock();
		printf("play time : %0.5f\n", (float)(t2 - t1) / CLOCKS_PER_SEC);	
	
		
	}
}


void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == startButton) {
		hideObject(back);
		hideObject(startButton);
		hideObject(endButton);
		t1 = clock();
		q = X[4], w = Y[1];
		p0 = createObject("av2-009.png", scene1, q, w);
		e = X[5], r = Y[5];
		p1 = createObject("av2-002.png", scene1, e, r);
		t = X[5], k = Y[1];
		p2 = createObject("av2-003.png", scene1, t, k);
		u = X[4], i = Y[3];
		p3 = createObject("av2-004.png", scene1, u, i);
		o = X[4], p = Y[5];
		p4 = createObject("av2-005.png", scene1, o, p);
		s = X[2], d = Y[3];
		p5 = createObject("av2-006.png", scene1, s, d);
		f = X[5], g = Y[3];
		p6 = createObject("av2-007.png", scene1, f, g);
		h = X[2], j = Y[1];
		p7 = createObject("av2-008.png", scene1, h, j);
		a = X[2], b = Y[5];
		white = createObject("back.png", scene1, a, b);
	}
	else if (object == endButton) {
		endGame();
	}
	else if (object == p0) {
		int z;
		int c;
		z = a, a = q, q = z, c = b, b = w, w = c;
		z = 0;
		c = 0;
		locateObject(p0, scene1, q, w);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p1) {
		int z;
		int c;
		z = a, a = e, e = z, c = b, b = r, r = c;
		z = 0;
		c = 0;
		locateObject(p1, scene1, e, r);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p2) {
		int z;
		int c;
		z = a, a = t, t = z, c = b, b = k, k = c;
		z = 0;
		c = 0;
		locateObject(p2, scene1, t, k);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p3) {
		int z;
		int c;
		z = a, a = u, u = z, c = b, b = i, i = c;
		z = 0;
		c = 0;
		locateObject(p3, scene1, u, i);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p4) {
		int z;
		int c;
		z = a, a = o, o = z, c = b, b = p, p = c;
		z = 0;
		c = 0;
		locateObject(p4, scene1, o, p);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p5) {
		int z;
		int c;
		z = a, a = s, s = z, c = b, b = d, d = c;
		z = 0;
		c = 0;
		locateObject(p5, scene1, s, d);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p6) {
		int z;
		int c;
		z = a, a = f, f = z, c = b, b = g, g = c;
		z = 0;
		c = 0;
		locateObject(p6, scene1, f, g);
		locateObject(white, scene1, a, b);
		ending();
	}
	else if (object == p7) {
		int z;
		int c;
		z = a, a = h, h = z, c = b, b = j, j = c;
		z = 0;
		c = 0;
		locateObject(p7, scene1, h, j);
		locateObject(white, scene1, a, b);
		ending();

	
	}

	
}



int main() {
	setMouseCallback(mouseCallback);
	scene1 = createScene("어벤져스", "av.png");
	startButton = createObject("start.png", scene1, 570, 70);
	endButton = createObject("end.png", scene1, 570, 20);
	
	startGame(scene1);


	
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
