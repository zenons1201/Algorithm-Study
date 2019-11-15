#include <iostream>
#include <algorithm>
using namespace std;

int N;
char input[6][6];
int max_[6][6];
int min_[6][6];

int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input[i][j];
			if (!((i + j) % 2)) input[i][j] -= '0';
		}
	}
	max_[0][0] = input[0][0];
	min_[0][0] = input[0][0];
	for (int j = 2; j < N; j += 2) {
		switch (input[0][j - 1]) {
		case '+': 
			max_[0][j] = max_[0][j - 2] + input[0][j];
			min_[0][j] = min_[0][j - 2] + input[0][j];
			break;
		case '*' :
			max_[0][j] = max_[0][j - 2] * input[0][j];
			min_[0][j] = min_[0][j - 2] * input[0][j];
			break;
		case '-' :
			max_[0][j] = max_[0][j - 2] - input[0][j];
			min_[0][j] = min_[0][j - 2] - input[0][j];
			break;
		default :
			break;
		}
		switch (input[j - 1][0]) {
		case '+':
			max_[j][0] = max_[j-2][0] + input[j][0];
			min_[j][0] = min_[j-2][0] + input[j][0];
			break;
		case '*':
			max_[j][0] = max_[j - 2][0] * input[j][0];
			min_[j][0] = min_[j - 2][0] * input[j][0];
			break;
		case '-':
			max_[j][0] = max_[j - 2][0] - input[j][0];
			min_[j][0] = min_[j - 2][0] - input[j][0];
			break;
		default:
			break;
		}
	}
	for (int i = 2; i < N; i += 2) {
		for (int j = 2; j < N; j += 2) {
			switch (input[i - 1][j]) { //위쪽에서 오는 것
			case '+':
				max_[i][j] = max_[i - 2][j] + input[i][j];
				min_[i][j] = min_[i - 2][j] + input[i][j];
				break;
			case '*':
				max_[i][j] = max_[i - 2][j] * input[i][j];
				min_[i][j] = min_[i - 2][j] * input[i][j];
				break;
			case '-':
				max_[i][j] = max_[i - 2][j] - input[i][j];
				min_[i][j] = min_[i - 2][j] - input[i][j];
				break;
			default:
				break;
			}
			switch (input[i][j-1]) { //왼쪽에서 오는 것
			case '+':
				max_[i][j] = max(max_[i][j], max_[i][j-2] + input[i][j]);
				min_[i][j] = min(min_[i][j], min_[i][j-2] + input[i][j]);
				break;
			case '*':
				max_[i][j] = max(max_[i][j], max_[i][j - 2] * input[i][j]);
				min_[i][j] = min(min_[i][j], min_[i][j - 2] * input[i][j]);
				break;
			case '-':
				max_[i][j] = max(max_[i][j], max_[i][j - 2] - input[i][j]);
				min_[i][j] = min(min_[i][j], min_[i][j - 2] - input[i][j]);
				break;
			default:
				break;
			}
		}
	}
	cout << max_[N - 1][N - 1] << " " << min_[N - 1][N - 1]<< endl;
	return 0;
}
