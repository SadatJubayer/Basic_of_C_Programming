int main()
{
    int i, j;

    for(i=1;i<=10;i++)
    {
      for(j=10;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }

    return 0;
}

