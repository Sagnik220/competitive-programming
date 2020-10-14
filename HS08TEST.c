#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float amt,init,bal,check;
	
	scanf("%f %f",&amt,&init);
	
	if(amt>0&&amt<=2000&&init>=0&&init<=2000){
	    check=fmod(amt,5.0);
	    if(check==0&&0.5<=init-amt){
	        bal=init-amt-0.50;
	        printf("%.2f",bal);
	    } else{
	        printf("%.2f",init);
	    }
	}
	return 0;
}

