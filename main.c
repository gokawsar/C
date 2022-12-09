#include <stdio.h>

int ht, run, score;

int toss(){

printf("\nYou want to Bat(1) or Ball(2) \n-------[Enter 1 or 2]-------\n");
scanf("%d", &ht);
                if (ht==1)
                    printf("\nYou Chose Batting\n");
                else if (ht==2)
                    printf("\nYou Chose Bowling\n");
                else{
                    toss();
                    }
return 0;

}

int main(){
            toss();


int hit = rand() % 7;

return 0;
}
