#include <iostream>

using namespace std;

int main() {
  int n, m, i, j;
  int a[100][100];
  int b[100][100];
  cin >> n >> m;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> b[i][j];
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cout << a[i][j] + b[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}