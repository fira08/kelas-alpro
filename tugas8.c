#include <stdio.h>
#include <string.h>

struct Barang {
char nama[100];
char kode[10];
int jumlah;
};


void urutkanNaik(struct Barang arr[], int n) {
int a, j;
struct Barang temp;

for (a = 0; a < n - 1; a++) {
for (j = a + 1; j < n; j++) {
if (strcmp(arr[a].nama, arr[j].nama) > 0) {
temp = arr[a];
arr[a] = arr[j];
arr[j] = temp;
}
}
}
}

void urutkanTurun(struct Barang arr[], int n) {
int a, j;
struct Barang temp;
for (a = 0; a< n - 1;a++) {
 for (j = a + 1; j < n; j++) {
if (strcmp(arr[a].nama, arr[j].nama) < 0) {
temp = arr[a];
arr[a] = arr[j];
arr[j] = temp; }
}
}
}

int main() {
int n;
 printf("Banyak barang: ");
scanf("%d", &n);

struct Barang data[n];
 for (int a = 0; a < n; a++) {
 printf("Data %d\n", a + 1);
 printf("Nama Barang : ");
scanf("%s", data[a].nama);
printf("Kode Barang : ");
scanf("%s", data[a].kode);
 printf("Jumlah : ");
scanf("%d", &data[a].jumlah);
    }

    
urutkanNaik(data, n);

printf("Ascending\n===OUTPUT===\n");
 for (int a = 0; a < n; a++) {
 printf("Data %d\n", a + 1);
 printf("Nama Barang : %s\n", data[a].nama);
printf("Kode Barang : %s\n", data[a].kode);
printf("Jumlah : %d\n", data[a].jumlah);
    }

    
urutkanTurun(data, n);
printf("Descending\n===OUTPUT===\n");
for (int a = 0; a < n; a++) {
printf("Data %d\n", a + 1);
 printf("Nama Barang : %s\n", data[a].nama);
 printf("Kode Barang : %s\n", data[a].kode);
printf("Jumlah : %d\n", data[a].jumlah);
    }

return 0;
}