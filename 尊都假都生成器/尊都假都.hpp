#include <iostream>
using namespace std;



struct �𶼼ٶ� {
	string �ж�(string x) {
		if (x == "o.O") return "��";
		else if (x == "O.o") return "�ٶ�";
		else if (x == "o.o") return "�ٶ�";
		else if (x == "O.O") return "��";
		else if (x == "o.O.o") return "��ͷ����";
		else if (x == "O.o.O") return "���ﶼ��";
		else if (x == "(^o^)") return "�ɰ�����";
		else if (x == "(^O^)") return "�Է�����";
		else if (x == "o.o.o") return "���۶���";
		else if (x == "O.O.O") return "��������";
		else return "�綼";
	}

	void ����() {
		cout << "�����������𶼼ٶ�����: " << endl
			<< "o.o  O.O  o.O  O.o  o.O.o  O.o.O  (^o^)  (^O^)  o.o.o  O.O.O" << endl;
	}

	void ����() {
		cout << "�𶼼ٶ������� v1.0.3" << endl
			<< "����: AImixAE" << endl
			<< "���� help �ɲ鿴��������" << endl
			<< "���� exit ���˳�" << endl;
		while (true) {
			string oO;
			cout << "������Ļ��ɶ�: "; cin >> oO;
			if (oO == "exit") {
				cout << "��" << endl;
				break;
			}
			else if (oO == "help") {
				����();
			}
			else cout << �ж�(oO) << endl << endl;
		}
	}
}�𶼼ٶ�;