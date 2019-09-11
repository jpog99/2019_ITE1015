#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
	int temp1,temp2;
        temp1 = *pa;
        *pa = *pc;
        *pc = temp1;
        
        temp2 = *pa;
        *pa = *pb;
        *pb = temp2;

}

void rotateRight(int* pa, int* pb, int* pc){
	int temp1,temp2;
	temp1 = *pa;
        *pa = *pb;
        *pb = temp1;

        temp2 = *pa;
        *pa = *pc;
        *pc = temp2;
}

int main(void){
	int a=10,b=20,c=30,input;
	printf("%d : %d : %d\n",a,b,c);
	scanf("%d",&input);

	while(input>0 && input<3){
		if (input == 1){
			rotateLeft(&a,&b,&c);
			printf("%d : %d : %d\n",a,b,c);
			scanf("%d",&input);
		}else if (input == 2){
			rotateRight(&a,&b,&c);
                        printf("%d : %d : %d\n",a,b,c);
                        scanf("%d",&input);
		}
	}
	return 0;
}
