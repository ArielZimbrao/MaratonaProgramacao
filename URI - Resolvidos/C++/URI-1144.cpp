#include <iostream>

using namespace std;

int main() {

	int i, j;

	scanf("%d", &j);
	for (i = 1; i <= j; i++){
		printf("%d %d %d\n", i, (i * i), ((i * i) * i));
		printf("%d %d %d\n", i, ((i * i) + 1), (((i * i) * i) + 1));
	}
    return 0;
}