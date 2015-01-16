#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<char> na, c, dr, ci, pet;
	na.push_back('n');
	na.push_back('d');
	na.push_back('b');
	na.push_back('g');
	na.push_back('s');
	c.push_back('y');
	c.push_back('b');
	c.push_back('r');
	c.push_back('g');
	c.push_back('w');
	dr.push_back('w');
	dr.push_back('t');
	dr.push_back('m');
	dr.push_back('c');
	dr.push_back('b');
	ci.push_back('d');
	ci.push_back('l');
	ci.push_back('p');
	ci.push_back('m');
	ci.push_back('b');
	pet.push_back('c');
	pet.push_back('h');
	pet.push_back('b');
	pet.push_back('f');
	pet.push_back('d');
	sort(na.begin(), na.end());
	sort(c.begin(), c.end());
	sort(dr.begin(), dr.end());
	sort(ci.begin(), ci.end());
	sort(pet.begin(), pet.end());
	
	int i=0;
	do {
		cout<<i<<"\n";
		i++;
		do {
			do {
				do {
					do {
						//1				
						if (c[-distance(find(na.begin(), na.end(), 'b'),
								na.begin())] != 'r') {
							continue;
						}
						//2
						if (pet[-distance(find(na.begin(), na.end(), 's'),
								na.begin())] != 'd') {
							continue;
						}
						//3
						if (dr[-distance(find(na.begin(), na.end(), 'd'),
								na.begin())] != 't') {
							continue;
						}
						//4
						if (find(c.begin(), c.end(), 'g')
								- find(c.begin(), c.end(), 'w') != -1) {
							continue;
						}
						//5
						if (dr[-distance(find(c.begin(), c.end(), 'g'),
								c.begin())] != 'c') {
							continue;
						}
						//6
						if (pet[-distance(find(ci.begin(), ci.end(), 'm'),
								ci.begin())] != 'b') {
							continue;
						}
						//7
						if (ci[-distance(find(c.begin(), c.end(), 'y'),
								c.begin())] != 'd') {
							continue;
						}
						//8
						if (dr[2] != 'm') {
							continue;
						}
						//9
						if (na[0] != 'n') {
							continue;
						}
						//10
						int ughi = -distance(find(ci.begin(), ci.end(), 'l'),
								ci.begin());
						if (ughi == 0 && pet[1] != 'c') {
							continue;
						} else if (ughi == 4 && pet[3] != 'c') {
							continue;
						} else if (pet[ughi - 1] != 'c'
								&& pet[ughi + 1] != 'c') {
							continue;
						}
						//11
						ughi = -distance(find(ci.begin(), ci.end(), 'd'),
								ci.begin());
						if (ughi == 0 && pet[1] != 'h') {
							continue;
						} else if (ughi == 4 && pet[3] != 'h') {
							continue;
						} else if (pet[ughi - 1] != 'h'
								&& pet[ughi + 1] != 'h') {
							continue;
						}
						//12
						if (dr[-distance(find(ci.begin(), ci.end(), 'b'),
								ci.begin())] != 'b') {
							continue;
						}
						//13
						if (ci[-distance(find(na.begin(), na.end(), 'g'),
								na.begin())] != 'p') {
							continue;
						}
						//14
						ughi = -distance(find(na.begin(), na.end(), 'n'),
								na.begin());
						if (ughi == 0 && c[1] != 'b') {
							continue;
						} else if (ughi == 4 && c[3] != 'b') {
							continue;
						} else if (c[ughi - 1] != 'b' && c[ughi + 1] != 'b') {
							continue;
						}
						//15
						ughi = -distance(find(ci.begin(), ci.end(), 'l'),
								ci.begin());
						if (ughi == 0 && dr[1] != 'w') {
							continue;
						} else if (ughi == 4 && dr[3] != 'w') {
							continue;
						} else if (dr[ughi - 1] != 'w' && dr[ughi + 1] != 'w') {
							continue;
						}

						for (char ch : na) {
							cout << ch << " ";
						}
						cout << "\n";
						for (char ch : c) {
							cout << ch << " ";
						}
						cout << "\n";
						for (char ch : dr) {
							cout << ch << " ";
						}
						cout << "\n";
						for (char ch : ci) {
							cout << ch << " ";
						}
						cout << "\n";
						for (char ch : pet) {
							cout << ch << " ";
						}
						cout << "\n";
						return 0;
					} while (next_permutation(na.begin(), na.end()));
				} while (next_permutation(c.begin(), c.end()));
			} while (next_permutation(dr.begin(), dr.end()));
		} while (next_permutation(ci.begin(), ci.end()));
	} while (next_permutation(pet.begin(), pet.end()));
	return 0;
}
