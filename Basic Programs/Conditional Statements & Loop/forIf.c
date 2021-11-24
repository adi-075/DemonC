#include <stdio.h>
// Print odd numbers from 1-100
//Using Break
main()
{
	int i;
	for(i=1; ;i=i+2)
	{
		printf("\t %d", i);
		if(i>=99) break;
	}
}

//using continue
//for(i=1;i<100;i=i+2)
//{
//	if(i%2==0) continue; //Only Odd Numbers will be printed
//	printf("\t %d", i);
//}
