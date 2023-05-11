        #include<stdio.h>
        int sum(int n)
            {
                int s=0;//sum 
                while(n!=0)
                {
                    int rem=n%10;//extracting the last digit of n
                    s=s+rem;//calculating sum
                    n=n/10;//updating n
                }
                return s;
            }
            int product(int n)
            {
                int p=1;//product
                while(n!=0)
                {
                    int rem=n%10;//extracting the last digit of n
                    p=p*rem;//calculating product
                    n=n/10;//updating n
                }
                return p;
            }
            void main()
            {
                int n,s,p;//n- number
                printf("\n Enter a number:");
                scanf("%d",&n);
                p=product(n);//storing value of product() in p
                s=sum(n);//storing value of sum() in s
                if(p==s)//checking condition for spy number
                printf("\n %d is a spy number",n);
                else
                printf("\n %d is not a spy number",n);
            }


