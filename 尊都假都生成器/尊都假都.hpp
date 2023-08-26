#include <iostream>
using namespace std;

struct 尊都假都 {
	string 判断(string x) {
		if (x == "o.O") return "尊都";
		else if (x == "O.o") return "假都";
		else if (x == "o.o") return "假都";
		else if (x == "O.O") return "尊都";
		else if (x == "o.O.o") return "三头六都";
		else if (x == "O.o.O") return "怪物都都";
		else if (x == "(^o^)") return "可爱都都";
		else if (x == "(^O^)") return "吃饭都都";
		else if (x == "o.o.o") return "三眼都都";
		else if (x == "O.O.O") return "建筑都都";
		else return "如都";
	}

	void 帮助() {
		cout << "以下是所有尊都假都内容: " << endl
			<< "o.o  O.O  o.O  O.o  o.O.o  O.o.O  (^o^)  (^O^)  o.o.o  O.O.O" << endl;
	}

	void 运行() {
		cout << "尊都假都生成器 v1.0.3" << endl
			<< "作者: AImixAE" << endl
			<< "输入 help 可查看所有内容" << endl
			<< "输入 exit 可退出" << endl;
		while (true) {
			string oO;
			cout << "输入你的怀疑都: "; cin >> oO;
			if (oO == "exit") {
				cout << "否都" << endl;
				break;
			}
			else if (oO == "help") {
				帮助();
			}
			else cout << 判断(oO) << endl << endl;
		}
	}
}尊都假都;
