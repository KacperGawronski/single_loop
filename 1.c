#include <stdio.h>

int main(void){
	int i,k,direction,momentum;
	k=6;
	direction=0;
	for(i=1;k>=0;i+=direction*(k!=0)){
		printf("%d%c",i,(direction<0&&i==1)?'\n':' ');
		direction=(i==k)?direction-1:(i==1)?direction+1:direction;
		k-=i==1&&direction<=0;
	}
	
	return 0;
}
