#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int pos, idx, l[100], z[100], mode;
bool dun[100];
string o, p[100];
int a, b, c, n, i;
int y[10] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

int
main()
{
  // No 1
  // a
  cout << "No 1";
  cout << "Answer a\n";
  cout << "Program gagal karena program yang merupakan binary search, habis "
          "dicek maunya digeser satu ke kiri atau kekanan.\n";
  // b
  cout << "\nAnswer b\n";
  cout << "setelah diperbaiki ini outputnya\n";
  a = 3;
  i = 0;
  b = 9;
  do {
    c = (i + b) / 2;
    if (y[c] < a)
      i = c + 1;
    else
      b = c - 1;
  } while ((y[c] != a) && (i < b));
  if (y[c] == a)
    cout << ("a is in the array ");
  else
    cout << ("a is not in the array ");
  // No 2
  // a
  cout << "\n\nNo 2";
  cout << "\nanswer a\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array (sebelum terurut) : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1]) {
        swap(y[b], y[b - 1]);
      };
  cout << "Beriku list array (sesudah terurut) : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  cout << "input angka yang ingin dicari : ";
  cin >> a;
  i = 0;
  b = n;
  do {
    c = (i + b) / 2;
    if (y[c] < a)
      i = c + 1;
    else
      b = c;
  } while ((y[c] != a) && (i < b));
  if (y[c] == a)
    cout << "value is in the array index - " << c;
  else
    cout << ("value is not in the array ");
  // b
  cout << "\n\nanswer b\n";
  cout << "Program mencari dari last statement\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array (sebelum terurut) : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1])
        swap(y[b], y[b - 1]);
  cout << "Beriku list array (sesudah terurut) : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  cout << "input angka yang ingin dicari : ";
  cin >> a;
  i = 0;
  b = n;
  do {
    c = (i + b) / 2;
    if (y[c] < a)
      i = c + 1;
    else
      b = c - 1;
  } while ((y[c] != a) && (i < b));
  if (y[c] == a)
    cout << "value is in the array index - " << c;
  else
    cout << ("value is not in the array ");
  // b
  cout << "\n\nanswer c\n";
  cout << "Program mencari dari data berupa string\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> p[i];
  }
  cout << "Beriku list array : {";
  cout << p[0];
  for (i = 1; i < n; i++)
    cout << "," << p[i];
  cout << "}\n";
  cout << "input angka yang ingin dicari : ";
  cin >> o;
  for (i = 1; i < n; i++)
    if (o == p[i])
      cout << "value is in the array index - " << i;
  // No 3
  // a
  cout << "\nNo 3";
  cout << "\nanswer a\n";
  i = 1;
  pos = n + 1;
  while (i != pos) {
    if (a = l[i])
      pos = 1;
    else
      i = i + 1;
  }
  if (i > n)
    idx = -1;
  else
    idx = pos;
  cout << "Program mencari dari yang tertinggi\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array sebelum diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1])
        swap(y[b], y[b - 1]);
  cout << "Berikut list array setelah diurutkan : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  cout << "yang tertinggi " << y[n - 1];
  cout << "\nanswer b\n";
  i = 1;
  pos = n + 1;
  while (i != pos) {
    if (a = l[i])
      pos = 1;
    else
      i = i + 1;
  }
  if (i > n)
    idx = -1;
  else
    idx = pos;
  cout << "Program mencari dari yang terkecil\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array sebelum diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1])
        swap(y[b], y[b - 1]);
  cout << "Beriku list array setelah diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  cout << "yang terkecil adalah " << y[0];

  // No 4
  // a
  cout << "\nNo 4";
  cout << "\nanswer a\n";
  cout << "Program mencari mode dan kejadian TERPILIH\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array sebelum diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1])
        swap(y[b], y[b - 1]);
  cout << "Beriku list array setelah diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  for (i = 0; i <= n; i++)
    dun[y[i]] = true;
  for (i = 0; i < n; i++)
    z[y[i]]++;
  cout << "mode keberapa ingin di cek kejadian nya ? \n";
  cout << "mode : ";
  cin >> a;
  cout << "\nMode is " << a << endl;
  cout << "kejadian : " << z[a] << endl;

  cout << "\nanswer b\n";
  cout << "Program mencari value dan kejadian ALL\n";
  cout << "Input banyak array : ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Array ke " << i << " : ";
    cin >> y[i];
  }
  cout << "Beriku list array sebelum diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  // Bubble Sort (Ascending)
  for (i = 0; i <= n - 2; i++)
    for (b = n - 1; b >= i + 1; b--)
      if (y[b] < y[b - 1])
        swap(y[b], y[b - 1]);
  cout << "Beriku list array setelah diurut : {";
  cout << y[0];
  for (i = 1; i < n; i++)
    cout << "," << y[i];
  cout << "}\n";
  for (i = 0; i <= n; i++)
    dun[y[i]] = true;
  for (i = 0; i < n; i++)
    z[y[i]] = 0;
  for (i = 0; i < n; i++)
    z[y[i]]++;
  for (i = 0; i < n; i++) {
    mode = y[i];
    if (dun[y[i]]) {
      cout << "value : " << mode << endl;
      cout << "kejadian : " << z[y[i]] << endl;
      dun[y[i]] = false;
    }
  }
}
