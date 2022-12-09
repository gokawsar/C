#include <stdio.h>
int main(){

int toss;
printf("You want to Bat(1) or Ball(2) \n-------[Enter 1 or 2]-------\n");
scanf("%d", &toss);


int hit = rand() % 7;

return 0;
}
