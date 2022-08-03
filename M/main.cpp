#include <bits/stdc++.h>

using namespace std;

class Node {
	public:
		int identificador;
		vector<int> filhos;

		Node(int identificador) {
			this->identificador = identificador;
		}

		void addFilho(int i) {
			Node n(identificador);
			filhos.push_back(n);
		}
}

class Tree {
public:
	int i;
	void add(int id) {
		id.addFilho(i);
	}
}