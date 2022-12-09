#include <stdio.h>

int ht, run, score;

int toss(){

printf("You want to Bat(1) or Ball(2) \n-------[Enter 1 or 2]-------\n");
scanf("%d", &ht);
return 0;

}

int main(){
            toss();
                    if (ht==1)
                        printf("\nYou Chose Batting\n");
                    else if (ht==2)
                        printf("\nYou Chose Bowling\n");
                    else
                        printf("\nSelect Batting(1) or Bowling(2)\n");


int hit = rand() % 7;

return 0;
}
