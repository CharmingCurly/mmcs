#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

struct price_row {
	int group;
	int id;
	int q;
	string name;
	//list *comp;
	list<int> comp;
};

price_row choose_row(price_row *p, int n, int k) {
	for (int i = 0; i < n; i++) {
		if (p[i].id == k) {
			return p[i];
		}
	}
	price_row row;
	row.id = 0;
	row.group = 0;
	row.q = 0;
	row.name = "";
	row.comp = list<int>();
	return row;
}

int get(char *file_quantity, char *file_list) {
	ifstream fq(file_quantity), fl(file_list);
	int n;
	fq >> n;
	price_row *p = new price_row[n];
	for (int i = 0; i < n; i++) {
		fq >> p[i].group >> p[i].id >> p[i].q;
		getline(fq, p[i].name, ';');
		p[i].comp = list<int>();
		while ((!fq.eof()) && (fq.peek() != '\n')) {
			int k;
			fq >> k;
			p[i].comp.push_back(k);
		}
	}
	int n1;
	fl >> n1;
	int k;
	fl >> k;
	price_row h = choose_row(p, n, k);
	for (int i = 1; i < n1; i++) {
		fl >> k;
		price_row h1 = choose_row(p, n, k);
		if (find(h.comp.begin(), h.comp.end(), h1.group) == h.comp.end()) {
			return 0;
		}

	}
	return 1;
}