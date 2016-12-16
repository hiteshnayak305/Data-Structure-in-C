/*  uploaded to Data-Structures-in-C @https://github.com/hiteshnayak305     */
// *****************************************************************************************************************//
/*                quicksort
            **********      best case time complexity = O(n)
                            average case time complexity = O(nlog(n))
                            worst case time complexity = O(n^2)     *****************                               */
#include<stdio.h>
void quick(int [],int,int);             //sorting function
int partition(int [],int,int);          //partitioning function
int main(){
    int n;
    printf("enter number of elements to short:--\n");
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
void quick(int x[],int start,int end)
{
	if(start<end){
	int pindex=partition(x,start,end);
	quick(x,start,pindex-1);
	quick(x,pindex+1,end);
}
}
int partition(int y[],int i,int j)
{
	int k;
	int piv=j;      //choosing last element as pivot
	int ind=i;      //using index as iterator for sorted elements
	for(k=ind;k<=j-1;k++)
	{
		if(y[k]<=y[piv])
		{
			int t=y[k];
			y[k]=y[ind];
			y[ind]=t;
			ind++;
		}
	}
	int t=y[piv];               //putting pivot at proper position
	y[piv]=y[ind];
	y[ind]=t;
	return ind;
}
