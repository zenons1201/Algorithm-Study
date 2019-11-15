#include <stdio.h>

int n;
int mat[101];
bool visit[101], chk = false;
bool ans[101];
void init() {
	for (int i = 1; i <= n; i++)visit[i] = false;
	chk = false;
}
void sol(int x, int y) {
	visit[x] = true;
	if (mat[x] == y)
		chk = true;
	if (!visit[mat[x]])sol(mat[x], y);
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &mat[i]);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		init();
		sol(i, i);
		if (chk) {
			ans[i] = true;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for (int i = 1; i <= n; i++) if (ans[i])printf("%d\n", i);
	return 0;
}
