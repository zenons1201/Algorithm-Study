#include<iostream>

using namespace std;

bool visited[26];
int map[21][21];
int R, C;
int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};
int maxCnt;

void backtracking(int x, int y, int cnt){

	visited[map[x][y]] = true;
	
	if(cnt > maxCnt)
		maxCnt = cnt;

	for(int i=0; i<4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || nx >= R || ny < 0 || ny >= C)
			continue;
			
		if(!visited[map[nx][ny]])
			backtracking(nx, ny, cnt+1);
	}

	visited[map[x][y]] = false; 
}

int main(){

	char input;
	cin >> R >> C;

	for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			cin >> input;
			map[i][j] = input - 65;
		}
	}

	backtracking(0, 0, 1);

	cout << maxCnt << endl;
	return 0;
	
}
