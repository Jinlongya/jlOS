#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

string o;

void outOrderInputField() {
	cout << "JinlongOS>> ";
}

void orderHelp() {
	cout << "1.open:" << endl << "  (1) open cal:打开计算器" << endl ;
	cout << "2.cleanGround:清空面板" << endl;
	cout << "3.powerOff:关闭计算机" << endl;
}

void cal() {
	int x, y;
	char op;
	cout << "请输入第一个数字" << endl;
	cin >> x;
	cout << "请输入第二个数字" << endl;
	cin >> y;
	cout << "请输入运算符号(乘号为\"*(Shift + 8)\", 除号为\"/\")" << endl;
	cin >> op;
	if(op == '+') {
		cout << x << " + " << y << " = " << x + y << endl;
	} else if(op == '-') {
		cout << x << " - " << y << " = " << x - y << endl;
	} else if(op == '*') {
		cout << x << " x " << y << " = " << x * y << endl;
	} else if(op == '/') {
		cout << x << " ÷ " << y << " = " << x / y << endl;
	}
}

void cleanGround() {
	system("cls");
	cout << "jinlongOS Copyright jinlong" <<endl << "键入\"help\"以查看命令 注意不要输入多余的空格" << endl ;
}

void powerOff() {
	system("pause");
	exit(0);
}

int orderParse(string o) {
	if (o == "help") {
		return 1;
	} else if (o == "open cal") {
		return 2;
	} else if (o == "cleanGround") {
		return 3;
	} else if (o == "powerOff") {
		return 4;
	} else if (o != "help" and o != "open cal" and o != "cleanGround" and o != "powerOff" and o != "") {
		return 5;
	}
}

void inputOrder() {
	getline(cin, o);
	orderParse(o);
}

int main() {
	cout << "欢迎使用jinlongOS";
	Sleep(1500);
	system("cls");
	cout << "正在为你准备系统";
	Sleep(2500);
	system("cls");
	cout << "一切就绪 开始使用吧";
	Sleep(1000);
	system("cls");
	cout << "jinlongOS Copyright jinlong" <<endl << "键入\"help\"以查看命令 注意不要输入多余的空格" << endl;
	while(true) {
		outOrderInputField();
		inputOrder();
		if(orderParse(o) == 1) {
			orderHelp();
		} else if(orderParse(o) == 2) {
			cal();
		}  else if(orderParse(o) == 3) {
			cleanGround();
		} else if(orderParse(o) == 4) {
			powerOff();
		} else if(orderParse(o) == 5) {
			cout << o << "并不是命令 请重新输入" << endl;
		}
	}
}
