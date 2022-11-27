int gcd(int,int);
int main()  
{  
    int n1, n2,g;  
    printf ( " Enter any two numbers: \n ");  
    scanf ( "%d %d", &n1, &n2);   
    g=gcd(n1,n2);
    return 0;  
}  
int gcd(int n1,int n2)
{
    if(n1==0&&n2==0)
    {
        return -1;
    }
    else
    {
        int i,GCD_Num=0;
for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; 
    }  
    printf (" GCD of two numbers %d and %d is %d.", n1, n2, GCD_Num); 
    }
    return 0;
}
