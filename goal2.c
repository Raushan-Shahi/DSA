// time complexity q2 
// calclulate time complexity of the following code fragment 



void func(int n)
{
    int sum=0;
    int product =1;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d , %d\n", i,j);
        }
    }
}


/*
    Time Complexity = Tn = k(n)(n) = kn2    k multiplied with square of n 
    Time Complexity = Tn = O(n2)            big O OF SQUARE N 
*/