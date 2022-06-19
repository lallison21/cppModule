#include <iostream>

using namespace std;

int main(int av, char **ac) {
	if (av < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; ac[i]; i++)
			for (int j = 0; ac[i][j]; j++)
				cout << (char)toupper(ac[i][j]);
	cout << endl;
	return 0;
}