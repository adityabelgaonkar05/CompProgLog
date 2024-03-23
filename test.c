void main()
{
    int no,zero_c=0,p_c=0,n_c=0,choice=1;
    printf("\nAditya Belgaonkar 16010123026");
    while(choice==1)
    {
        printf("\nEnter A Number: ");
        scanf("%d",&no);
        if(no==0)
        {
            zero_c++;
        }
        else if(no>0)
        {
            p_c++;
        }
        else if(no<0)
        {
            n_c++;
        }
        else if(no=='+')
        {
            break;
        }
        printf("\n Want to check more numbers? ");
        printf("\n If yes Enter \"1\": ");
        scanf("%d",&choice);

    }

    printf("\n Positive nos %d",p_c);
    printf("\n Negative nos %d",n_c);
    printf("\n Zeroes %d",zero_c);

}
