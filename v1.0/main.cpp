#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

string o;

void outOrderInputField() {
	cout << "JinlongOS>> ";
}

void orderHelp() {
	cout << "1.open:" << endl << "  (1) open cal:�򿪼�����" << endl ;
	cout << "2.cleanGround:������" << endl;
	cout << "3.powerOff:�رռ����" << endl;
}

void cal() {
	int x, y;
	char op;
	cout << "�������һ������" << endl;
	cin >> x;
	cout << "������ڶ�������" << endl;
	cin >> y;
	cout << "�������������(�˺�Ϊ\"*(Shift + 8)\", ����Ϊ\"/\")" << endl;
	cin >> op;
	if(op == '+') {
		cout << x << " + " << y << " = " << x + y << endl;
	} else if(op == '-') {
		cout << x << " - " << y << " = " << x - y << endl;
	} else if(op == '*') {
		cout << x << " x " << y << " = " << x * y << endl;
	} else if(op == '/') {
		cout << x << " �� " << y << " = " << x / y << endl;
	}
}

void cleanGround() {
	system("cls");
	cout << "jinlongOS Copyright jinlong" <<endl << "����\"help\"�Բ鿴���� ע�ⲻҪ�������Ŀո�" << endl ;
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
	cout << "��ӭʹ��jinlongOS";
	Sleep(1500);
	system("cls");
	cout << "����Ϊ��׼��ϵͳ";
	Sleep(2500);
	system("cls");
	cout << "һ�о��� ��ʼʹ�ð�";
	Sleep(1000);
	system("cls");
	cout << "jinlongOS Copyright jinlong" <<endl << "����\"help\"�Բ鿴���� ע�ⲻҪ�������Ŀո�" << endl;
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
			cout << o << "���������� ����������" << endl;
		}
	}
}
