void main(){
int a[50],i;
printf("enter number:\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("REVERSE NUMBER:\n");
for(i=4;i>=0;i--)
{
    printf("%d\n",a[i]);
}
getch();
}
