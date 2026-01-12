#include <stdio.h>
#define NUM_GAP 4
int main() {
    int units_consumed,i;
    int units_in_gap;
    int remaining_units;
    float total_bill = 0.0;
      
    int unit_limits[NUM_GAP] = {15, 55, 100, 9999}; 
    float rates[NUM_GAP] = {1.50, 2.00, 2.50, 3.00};

    scanf("%d", &units_consumed);
    while (units_consumed != -1) {
       	total_bill = 0.0 ;
        if (units_consumed > 50 ) {
        	remaining_units = units_consumed ;
        	for(i=0;i<NUM_GAP&&remaining_units>0;i++)
        	{
        		if(remaining_units < 55)
        		{
        			units_in_gap = remaining_units ;
				} else {
					if (i==0)
					{
						units_in_gap = unit_limits[i];
					} else {
						units_in_gap = unit_limits[i] - unit_limits[i-1];
					}
					total_bill += units_in_gap*rates[i];
					remaining_units -= units_in_gap;
				}
			}
        	
        }
        printf("%.2f\n", total_bill);
        scanf("%d", &units_consumed);

    }
    return 0;
}

