#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double x1,x2,y1,y2,resul;

	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);


	resul=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

	printf("%.4lf\n",resul);
    return 0;
}