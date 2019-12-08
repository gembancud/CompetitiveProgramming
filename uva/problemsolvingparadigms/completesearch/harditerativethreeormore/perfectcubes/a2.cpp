#include <stdio.h>

int main()
{
    freopen("a2out","w",stdout);
	int a,b,c,d;
	int acube,bcube,ccube,bplusc;
	for(a=6;a<=200;a++)
	{
		acube=a*a*a;
		for(b=2;b<a;b++)
		{
			bcube=b*b*b;
			for(c=b;c<a;c++)
			{
				ccube=c*c*c;
				bplusc=bcube+ccube;
				for(d=c;d<a;d++)
				{
					if(acube==(bplusc+d*d*d))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}		
	}
	return 0;
}