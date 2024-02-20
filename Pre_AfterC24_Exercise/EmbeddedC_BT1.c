#include <stdio.h>
#include<stdint.h>

int nhap_xuat_mang(int n)
{   
    int array[100];
    printf("khoi tao mang arr[%d] \n",n);
    printf("Nhap cac phan tu cua mang :\n");
    for(int i = 0;i < n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&array[i]);
    }

    printf("arr[%d]={",n);       
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);       
    }
    printf("}\n");  


    printf("dia chi cua tung phan tu :\n");
    for(int i=0;i<n;i++)
    {
        printf("&arr[%d] = %d \n",i,&array[i]);       
    }
    return 0;

}

main()
{
    int n;
    do
    {
        printf("\nNhap so phan tu 0<=n<=16: ");
        scanf("%d", &n);
	}while(n<0||n>16);
    nhap_xuat_mang(n);
}