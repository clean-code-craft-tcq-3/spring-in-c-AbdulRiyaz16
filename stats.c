Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@AbdulRiyaz16 
clean-code-craft-tcq-3
/
spring-in-c-AbdulRiyaz16
Public
generated from clean-code-craft-tcq-1/statisact-c
Code
Issues
Pull requests
1
Actions
Projects
Wiki
Security
Insights
Settings
spring-in-c-AbdulRiyaz16/stats.c
@AbdulRiyaz16
AbdulRiyaz16 Update stats.c
Latest commit 815f25e 1 minute ago
 History
 2 contributors
@AbdulRiyaz16@github-classroom
58 lines (53 sloc)  1.02 KB
   
#include "stats.h"
#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif
#ifdef INFINITY
/* INFINITY is supported */
#endif


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
   // s.average = 0;
    //s.min = 0;
    //s.max = 0;
    float max,min,avg;
    float sum;
    if(setlength==0)
    {
    	return s;
    }
    else
    {
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
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
