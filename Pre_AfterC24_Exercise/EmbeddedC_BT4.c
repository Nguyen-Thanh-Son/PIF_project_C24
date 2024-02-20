#include<stdint.h>
#include<stdio.h>

void average_value(int array[100],int n)
{
    int sum = 0;
    float value;
    for(int i = 0;i < n;i++)
    {
        sum = sum + array[i];
    }
     value = (float) sum / n ;
    printf("gia tri trung binh cua mang la : %.3f ",value);

}
void max_min(int array[100],int n)
{
    int max,min;
    max = array[0];
    for (int i=0;i<n;i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    printf("phan tu lon nhat la: %d \n",max);

    min = array[0];
    for (int i=0;i<n;i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    printf("phan tu nho nhat la: %d \n",min);
}
void nhap_xuat_mang(int array[100],int n)
{   
    
    printf("khoi tao mang arr[%d] \n",n);
    printf("Nhap cac phan tu cua mang :\n");
    
    for(int i=0;i<n;i++)
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
    printf("kich thuoc mot phan tu trong mang : %d\n",sizeof(array[0]));
    
    
}
main()
{   
    int n;
    int array[100];
    do
    {
        printf("\nNhap so phan tu 0<=n<=16: ");
        scanf("%d", &n);
	}while(n<6);
    nhap_xuat_mang(array,n);
    max_min(array,n);
    average_value(array,n);
}