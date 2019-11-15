#include <iostream>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int maps[50][50];
int N, L, R;
bool visited[x][y];
int people, num;
vector<pair<int, int>> v;
bool Check(int n)
{
	if(n >= L && n <= R)
	{
		return true;
	}
	
	return false;
}

void DFS(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 0 && ny >= 0 && nx < N && ny < N)
		{
			if(Check(abs(maps[x][y] - maps[nx][ny]) && !visited[nx][ny])
			{
				visited[nx][ny] = true;
				v.push_back(make_pair(nx, ny));
				people += graph[nx][ny];
				num++;
				DFS(nx, ny);
			}
		}
	}
}

int main(void)

{

        ios_base::sync_with_stdio(0);

        cin.tie(0);

        cin >> N >> L >> R;

 

        for (int i = 0; i < N; i++)

                 for (int j = 0; j < N; j++)

                         cin >> graph[i][j];

 

        int result = 0;

        while (1)

        {

                 memset(visited, false, sizeof(visited));

 

                 bool found = false;

                 for(int i=0; i<N; i++)

                         for (int j = 0; j < N; j++)

                         {

                                 if (visited[i][j])

                                          continue;

 

                                 visited[i][j] = true;

                                 people = graph[i][j];

                                 num = 1;

 

                                 v.clear();

                                 v.push_back({ i, j });

                                 DFS(i, j);

 

                                 //국경이 하나라도 열리면

                                 if (num >= 2)

                                 {

                                          found = true;

                                          //업데이트

                                          for (int i = 0; i < v.size(); i++)

                                                  graph[v[i].first][v[i].second] = people / num;

                                 }

                         }

 

                 if (found)

                         result++;

                 else

                         break;

        }

        cout << result << "\n";

        return 0;
