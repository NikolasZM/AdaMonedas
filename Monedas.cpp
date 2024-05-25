#include <iostream>
using namespace std;

int monedas[] = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 200 };
int respuesta[8];

void cambio(int vuelto, int* mon, int* resp, int n) {

	int act = 0;
	int j = n-1;

	for (int i = 0; i < n; i++) {
		resp[i] = 0;
	}

	while (act != vuelto) {
		while (mon[j] > (vuelto - act) && (j > 0)) {
		j--;
		}
	if (j == -1) return;
	resp[j] = (vuelto - act) / mon[j];
	act = act + mon[j] * resp[j];
	}
	
}

void verResp() {
	cout << "Se dieron:\n";
	for (int i = 0; i < 8; i++) {
		cout << respuesta[i] << " moneda(s) de " << monedas[i] << " centavos.\n";
	}
}

int main() {
	
	cambio(189, monedas, respuesta, 8);
	verResp();
}
