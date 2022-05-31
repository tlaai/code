#include <bits/stdc++.h>
using namespace std;

// Phần này là template, các bạn có thể bỏ qua
// Hàm các bạn cần hoàn thành nằm bên dưới

void read(int &x){
  char c;
  bool nega = 0;
  while( (!isdigit(c = getchar())) && (c != '-'));
  if(c == '-'){
    nega = 1;
    c = getchar();
  }
  x = c - 48;
  while(isdigit(c = getchar()))
    x = x * 10 + c - 48;
  if(nega) x = -x;
}

void write(int x){
  if(x > 9)
    write(x / 10);
  putchar(x % 10 + 48);
}

const int MAXN = 9 * 1e6 + 5;
const int MAXVAL = 1e9+1;
int n;
int a[MAXN];

int countDistinct() {
  int ans;
  // hoàn thành hàm này để trả về kết quả: số phần tử phân biệt của mảng a có n phần tử
  return ans;
}

int main() {
  read(n);
  for (int i = 1; i <= n; i++)
    read(a[i]);
  write(countDistinct());
  return 0;
}
