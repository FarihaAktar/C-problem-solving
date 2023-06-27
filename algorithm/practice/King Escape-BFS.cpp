#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX_N = 1005;
const int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

bool isValid(int x, int y, int n) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

bool isThreatened(int qx, int qy, int kx, int ky) {
    return qx == kx || qy == ky || abs(qx - kx) == abs(qy - ky);
}

bool canBobWin(int n, int qx, int qy, int kx, int ky, int tx, int ty) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    q.push(make_pair(kx, ky));
    visited[kx][ky] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        if (cx == tx && cy == ty) {
            return true;  // Bob can reach the target position without getting in check
        }

        for (int i = 0; i < 8; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (isValid(nx, ny, n) && !visited[nx][ny] && !isThreatened(qx, qy, nx, ny)) {
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }

    return false;  // Bob cannot reach the target position without getting in check
}

int main() {
    int n;
    cin >> n;

    int qx, qy;
    cin >> qx >> qy;

    int kx, ky;
    cin >> kx >> ky;

    int tx, ty;
    cin >> tx >> ty;

    if (canBobWin(n, qx, qy, kx, ky, tx, ty)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
