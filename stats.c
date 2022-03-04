#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float max,min,avg;
    int sum;
    sum=0;
    avg=0;
    max= numberset[0];
    min=numberset[0];
    sum=numberset[0];
    for (int i = 1; i < setlength; i++)
	{
		if (numberset[i] > max) 
		{
			max = numberset[i];
		}
        	if(numberset[i] < min)
        	{
            		min=numberset[i];
            
       		}
       		sum=sum+numberset[i];
        }
	avg=sum/setlength;
	s.average=avg;
	s.max=max;
	s.min=min;

    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

/*int main()
{
    Stats computedStats;
    float numberset[] = {1.5, 8.9, 3.2, 4.5};
    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    computedStats = compute_statistics(numberset, setlength);
return 0;
}*/
